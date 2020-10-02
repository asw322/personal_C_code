# include <stdio.h>
# include <string.h>

typedef struct {
	char * name; 
	float salary; 
	int workingDays;
	int isMale;
} person;

typedef struct {
	int c;
	char *title; 
} object;

int main() {
	int num1, num2;
	float deci;
	char character; 

	//create a C array that stores the person object then the car object

	
object myObject; 
	myObject.c = 55;
	myObject.title = "Harry potter";
	myObject.title = strcat(myObject.title, "abcd");

	printf("%s\n", myObject.title);
	

person myPerson; 
	myPerson.name = "Alan Wang";
	myPerson.salary = 89584.90;
	myPerson.workingDays = 34;
	myPerson.isMale = 1;

	

	printf("\n\n\n");

	if(myPerson.isMale == 1) {
		printf("Name: %s\nSalary: %f\nWorking Days: %i\nIs male: true\n", myPerson.name, myPerson.salary, myPerson.workingDays);
	}
	else {
		printf("Name: %s\nSalary: %f\nWorking Days: %i\nIs male: false\n", myPerson.name, myPerson.salary, myPerson.workingDays);
	}



	


	char *temp = "";
	temp = "abcd";
	// temp = myObject.title;
	// temp = strcat(temp, "ab");

	printf("%s\n", myObject.title);
	

	// printf("Enter two integers: ");
	// scanf("%d%i", &num1, &num2);
	// printf("First num: %d \nSecond num: %d\n", num1,num2); //%d and %i both take integers from users 

	// printf("Enter a double: ");
	// scanf("%f", &deci);
	// printf("Decmial = %f\n", deci);

	// printf("\n\nEnter a Character:");
 //    scanf(" %c",&character);
 //    printf("\n\nThe character that you have entered is %c\n", character);

 //    //Using the gets method to get a stirng
 //    int n = 50; //size of c array
 //    char sentence[n]; 
 //    printf("Enter a sentence \n:");
 //    gets(sentence); //gets the input of the total line (does not need to be the pointer to the c array)

 //    printf("Sentence = %s\n", sentence);
	return 0;
}