#include <assert.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//#include <omp.h>
char **world;
char **new_world;
int x, y;

int num_neighbors(int i, int j)
{
    int a;
    a = ((world[i - 1][j - 1] == '*') + (world[i][j - 1] == '*') + (world[i + 1][j - 1] == '*') + (world[i - 1][j] == '*') + (world[i + 1][j] == '*') + (world[i - 1][j + 1] == '*') + (world[i][j + 1] == '*') + (world[i + 1][j + 1] == '*'));
    return a;
}

char get_next_state(int i, int j)
{

    int lol = num_neighbors(i, j);
    if (world[i][j] == '*')
    {
        if (lol == 2 || lol == 3)
        {
            return '*';
        }
        return ' ';
    }
    if (world[i][j] == ' ')
    {
        if (lol == 3)
        {
            return '*';
        }
    }

    return ' ';
}

void next_generation()
{
    char temp;
    int i, j;
    //#pragma omp parallel for schedule(static)
    for (i = 1; i < x - 1; i++)
    {
        for (j = 1; j < y - 1; j++)
        {
            new_world[i][j] = get_next_state(i, j);
        }
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            temp = world[i][j];
            world[i][j] = new_world[i][j];
            new_world[i][j] = temp;
        }
    }
}

int main(int argc, char **argv)
{
    srand(time(0));
    int iter = atoi(argv[2]);
    int g, i, j;
    // load_world_from_file(argv[1]);

    char c;
    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        exit(1);
    }
    fscanf(fp, "%d %d", &x, &y);
    world = malloc(sizeof(char *) * y);
    for (i = 0; i < x; i++)
    {
        world[i] = malloc(sizeof(char) * x);
        new_world = malloc(sizeof(char *) * y);
    }
    for (i = 0; i < y; i++)
        new_world[i] = malloc(sizeof(char) * x);
    for (i = 0; i < x; i++)
    {
        fgetc(fp);
        fgetc(fp);
        for (j = 0; j < y; j++)
        {
            world[i][j] = fgetc(fp);
            fgetc(fp);
        }
    }
    fclose(fp);
    struct timespec start, end;
    // double start = 0;
    // double end = 0;
    // start = omp_get_wtime();
    clock_gettime(CLOCK_MONOTONIC, &start);
    for (g = 0; g < iter; g++)
    {
        printf("Gen%d\n", g + 1);
        next_generation();
    }

    // end = omp_get_wtime();
    // printf("Ex time = %d\n", end - start);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = 0;
    elapsed = (end.tv_sec - start.tv_sec);
    elapsed += (end.tv_nsec - start.tv_nsec) / 1000000000.0;
    printf("TIME ELAPSED %fs \n", elapsed);
    // save_world_to_file(argv[3]);

    FILE *fpp = fopen(argv[3], "w");
    if (fpp == NULL)
    {
        exit(1);
    }
    fprintf(fpp, "%d %d", x, y);
    fprintf(fpp, "\n");
    for (i = 0; i < x; i++)
    {

        for (j = 0; j < y; j++)
        {
            fprintf(fpp, "|");
            fprintf(fpp, "%c", world[i][j]);
        }
        fprintf(fpp, "|");

        fprintf(fpp, "\n");
    }
    fclose(fpp);
    free(world);
    free(new_world);
    return 0;
}
