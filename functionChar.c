#include <stdio.h>

void printAscii();

void main() {
	printAscii();
}


void printAscii(letter) {
	for(letter='A';letter<='Z';letter++) 
		printf("%c - %d\n", letter, letter);
}

