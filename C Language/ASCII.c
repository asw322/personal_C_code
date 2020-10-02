# include <stdio.h>
# include <time.h>

int main() {
	char b;
	b = 'a';
	clock_t begin = clock();

	char c;
	printf("Enter a character to find the ASCII value: ");
	scanf("%c", &c);

	printf("ASCII value of %c = %d\n", c,c);

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("Time consumed: %f\n", time_spent);
}
