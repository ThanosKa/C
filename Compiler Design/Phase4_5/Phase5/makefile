compile:
	bison --yac --defines=parser.h --output=parser.c parser.y
	flex --outfile=scanner.c scanner.l
	gcc -g -o res scanner.c parser.c symtable.c quad.c tcodegen.c avm.c -lm