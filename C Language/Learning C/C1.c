//importing standard library h
#include <stdlib.h>
//standard input output h
#include <stdio.h>

int mult(int a, int b) {
	return a * b;
}

void function1(int *c) {
	*c = 33; //Must use *c because c is just a pointer and cannot access values in pointers
}

struct database {
	int id;
	char *name;
	int age;
};


struct xample {
	int x;
};

//Method arguments from terminal 
int main(int argc, char** argv) {

	struct database alan;
	alan.id = 123123;
	printf("%d\n", alan.id);


	// printf("Hello World");
	// printf("\n");

	// for(int i = 0; i < argc; i++) {
	// 	printf("%s-", argv[i]);
	// }
	// // printf("\n");

	// int myNum = 1000;
	// int* myNum2; 
	// *myNum2 = 3;
	// printf("Please enter a number: ");
	// scanf("%d", &myNum); //This number can accept floats but will implicitally truncate to int 
	// if(myNum )
	// printf("My number = %d\n", myNum);
	// printf("My nUmber 2 = %x\n", &myNum2);
	// printf("My nUmber 2 klasdjff= %d\n", myNum2);

	// int a; 
	//    char *x; 
	//    x = (char *) &a; 
	//    a = 512; 
	//    x[0] = 1; 
	//    x[1] = 2; 
	//    printf("%d\n",a);   


	// int a = 5;
	// // for(int i = 0; i < 5; i++) {
	// // 	for(int j = 0; j < i+1; j++) {
	// // 		printf("%d", a);
	// // 	}
	// // 	printf("\n");
	// // }

	// int i = 0;
	// while(i < 5) {
	// 	int j = i;
	// 	while(j > 0) {
	// 		printf("%d", a);
	// 		j--;
	// 	}
	// 	i++;
	// 	printf("\n");
	// }

	// printf("%d\n", mult(a, i));

	// int selection;
	// printf("1. Create character\n2. Delete character\n3. Modify character\n");
	// scanf("please enter a number: %d", &selection);
	// printf("\n");
	// switch(selection) {
	// 	case 1:
	// 		printf("Creating character.. ");
	// 		break;
	// 	case 2:
	// 		printf("Delete character.. ");
	// 		break;
	// 	case 3:
	// 		printf("Modify character.. ");
	// 		break;
	// 	default:
	// 		printf("Input invalid");
	// 		break;			
	// }

	// int *c;
	// int x = 55;
	// c = &x;

	// printf("%d\n", *c); //55
	// function1(c);
	// printf("%d\n", *c); //33

	// struct xample structure; 
	// struct xample *ptr;

	// structure.x = 12;
	// ptr = &structure;

	// printf("%d\n", ptr -> x);


	// int elem[50];
	// elem[0] = 44;
	// printf("%d\n", elem[0]);

	// int *elem2;
	// elem2 = malloc(sizeof(int*));
	// elem2[0] = 33;
	// printf("%d\n", elem2[0]);

	// char string[256];

	// //This method gets the user input string with a maximum size of 256 using stdin
	// fgets(string, 256, stdin); 
	// printf("%s", string);


	char s2[50];
	char *s1;
	s1 = malloc(sizeof(char*));

	fgets(s2, 50, stdin);
	fgets(s1, 50, stdin);

	int comp;
	comp = strcmp(s1,s2);
	printf("%d\n", comp);

	if(comp > 0 ) {
		printf("Sentence 1 is larger than sentence 2");
	}
	else if(comp < 0) {
		printf("Sentence 2 is larger than sentence 1");
	}
	else {
		printf("Sentence lenght are equal");
	}
	printf("\n");

	return 0;
}

