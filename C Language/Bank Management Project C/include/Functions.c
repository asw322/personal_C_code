#include <stdio.h>
#include <stdlib.h>

int menu() {
	printf("CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM");
	printf("\n");
	printf("WELCOME TO THE MAIN MENU");
	printf("\n");
	printf("1. Create an account\n2. Update information of existing account\n3. For transactions\n4. Check the details of existing account\n5. Removing existing account\n6. View customer's list\n7. Exit\n\n\n\tEnter your choice\n:  ");

	int action;
	scanf("%d", &action);

	switch(action) {
		case 1:
			new_acc();
			break;
		case 2:
			edit();
			break;
		case 3:
			transact();
			break;
		case 4:
			see();
			break;
		case 5:
			erase();
			break;
		case 6:
			view();
			break;
		case 7:
			exit(1);
			break;	
	}
	return 0; 
}

int login(char *username, char *password, char *filename) {jj
	
	FILE *file = fopen(filename, "r");

	char c;
	c = fgetc(file);
	while(c != EOF) {
		printf(username);
	}
	return 0;
}

/*
Method to create new account then store the information into a separate file 
*/
int new_acc() {
	printf("Adding new acction.. \n");	
	return 0; 
}

/*
Method to edit an existing account then store into a separate file
*/
int edit() {
	printf("Editting.. \n");
	char *username, *password, *login_file;
	printf("Log in\n");
	printf("Username: ");
	scanf("%s", &username);
	printf("Password: ");
	scanf("%s", &password);
	login_file = "login_file";

	printf("Thank you. Verifying.. ");
	login(username, password, login_file);

	return 0; 
}

/*
Opens user account after log in and makes transactions 
*/
int transact() {
	printf("Opening transactions.. \n");
	int result = login("alanmelon", "435600oo", "login_file");
	return 0; 
}

/*

*/
int erase() {
	printf("Deleting.. \n");
	int result = login("alanmelon", "435600oo", "login_file");
	return 0; 
}
int see() {
	printf("Viewing list.. \n");
	int result = login("alanmelon", "435600oo", "login_file");
	return 0; 
}
int view() {
	printf("");
	return 0;
}
int main() {
	menu();
	return 0;
}