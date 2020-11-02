#include <stdio.h>
#include <stdlib.h>
#include "testScanner.h"

// driver to test the scanner 
void tester(FILE *fin) {

	
	while (fgets(buffer,sizeof buffer, fin) != NULL) {
		filter(buffer);
		
	}
}
