#include <stdio.h>
#include <stdlib.h>

int main() {
	int intarray[10];
	int i = 0;

	for(i = 0; i < 10; i++) {
		scanf("%d", &intarray[i]);
	}

	for(i = 0; i < 10; i++) {
		printf("%d ", intarray[i]);
	}
	printf("\n");
}
