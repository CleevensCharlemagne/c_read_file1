// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Driver code
int main()
{
    FILE* ptr;
	char ch;

	// Opening file in reading mode
	ptr = fopen("test.txt", "r");

	if (NULL == ptr) {
		printf("file can't be opened \n");
	}

	printf("content of this file are \n");

	// Printing what is written in file
	// character by character using loop.
	do {

	} while (ch != EOF);
}
