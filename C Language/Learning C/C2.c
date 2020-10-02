#include <stdio.h>
#include <stdlib.h>


void method1() {
	FILE *fl;
	fl = fopen("basic.txt", "r");

	if(fl == 0) {
		printf("Cannot access file.. ");
		exit(0);
	}


	FILE *newFile;
	newFile = fopen("newBasic.txt", "w");


	char c; //create a char c
	c = fgetc(fl); //gets the first character in file 
	while(c != EOF) { //while c is not End of File 
		if(c >= 48 && c <= 57) { //we can check if the ASCII value of the character is within the range for numbers 
			printf("_");
			fputc('_', newFile);
		} 
		else {
			printf("%c", c); //print c
			fputc(c, newFile);

		}
		c = fgetc(fl); //gets the next character in the file
	}


	fprintf(fl, "Testing..\n");
	int closeInt = fclose(fl);
	if(closeInt == 0) {
		printf("Closed successfully.. ");
	}
	else {
		printf("Unsuccessful closing.. ");
	}
	printf("\n");

	fl = 0;
}

void recursion(int counter) {
	printf("counter = %d\n", counter);
	recursion(counter + 1);
}

//argc = argument counter = number of 
int main(int argc, char *argv[]) {
	recursion(1);
	return 0;
}