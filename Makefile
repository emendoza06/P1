all: scanner

scanner:
	gcc -Wall token.c main.c testScanner.c scanner.c -o scanner

clean:
	rm scanner
