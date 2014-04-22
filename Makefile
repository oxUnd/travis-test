CC=gcc

main:
	${CC} main.c -o main

clean:
	rm -rf *.o main
