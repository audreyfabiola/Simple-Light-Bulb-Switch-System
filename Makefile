all:
# Ignore error 'unknown escape sequence'
	gcc -Wno-unknown-escape-sequence -o mylib.o -c mylib/mylib.c
	gcc -Wno-unknown-escape-sequence -o main.out main.c mylib.o
	./main.out
clear:
	rm *.out
	rm *.o
