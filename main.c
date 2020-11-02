/*Epharra Mendoza
Program Translation
P1*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "testScanner.h"

int main(int argc, char *argv[]){
	
	//Checks that arguments do no exceed 2
	if(argc > 2) {
		errno = 8;
		perror("Error: Too many arguments. Accepts 0 or 1 arguments");
		return 1;
	}

	char *infile;
	
	FILE * fp = stdin;

	if(argc == 2) { 
	
		//concatenates strings to proper extension
		infile = malloc(strlen(argv[1]) + strlen(".fs") + 1);
		strcpy(infile, argv[1]);
		strcat(infile, ".fs");
		fp = fopen(infile, "r");
	}

	tester(fp);

	//close file
	fclose(fp);

	return 0;
}
