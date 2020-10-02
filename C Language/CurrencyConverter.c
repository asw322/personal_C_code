#include <stdio.h>
#include <stdlib.h>

float getConversionRate(char *country_name) {
	float conversion_rate;
	FILE *fptr;

	fptr = fopen("CountryAbb.txt", "r");

	if(fptr == NULL) {
		printf("FILE ERROR");
		exit(1);
	}

	char ch = getc(fptr);
	int count = 0;
	while((ch != EOF)) {
		// printf("%c", ch);
		if(country_name[count] == ch) {
			count++;
		}
		else {
			count = 0;
		}

		//Found the country
		if(count == 2) {
			count = 0;

			//Getting useless char that stores ','
			char temp = getc(fptr);
			char elem;

			char *strCon;
			while((elem != '\n') && (elem != EOF)) {
				elem = getc(fptr);
				strCon += elem;
			}

			conversion_rate = atof(strCon);

			fclose(fptr);
			printf("%f", conversion_rate);
			return conversion_rate;
		}
		ch = getc(fptr);
	}
	printf("Country Invalid\n");
	return 0;	
}

float convert(int amount, char *country_name) {
	float conversion_rate = getConversionRate(country_name);
	float new_amount = amount * conversion_rate;
	return new_amount;
}

int main() {
	printf("Welcome to Currency Converter \n\tEnter amount you want to convert as float: ");
	int amount = 0;
	scanf("%d", &amount);
	printf("\tEnter country abbreviation 2 letters: ");
	char *country_name;
	scanf("%s", country_name);

	printf("You entered %d from USD to %s\n", amount, country_name);
	float final_amount = convert(amount, country_name);
	printf("Your final amount: %f\n", final_amount);
	return 0;
}