#include <stdio.h>
#include <stdlib.h>
#include "token.h"

int bufInt;
char ch;
int bufferIndex;
int length;

void filter(char *lineBuffer);

int scanner(char *lineBuffer, int bufIndex, int line);

int checkIfDigit(int bInt);

int checkIfUpperCase(int bInt);

int checkIfLowerCase(int bInt);

int checkIfSymbol(int bInt);

int checkIfWhitespace(int bInt);

int checkIfUnderScore(int bInt);

int checkIfIdentifierIsKeyword(char *tk);

int checkIfNewLine(int lastChar, int currChar);

int checkIfEOF(int lastChar, int currChar);

int checkIfComment(int bInt);
