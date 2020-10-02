#include <stdio.h>
#include <stdlib.h>



struct Message {
	int timestamp;
	char *username;
	char *message;
};

int serialize_int(int);
int serialize_string(char*);
int serialize_int_field(char*, int);
int serialize_string_field(char*, char*);
// int serialize_message(Message);


//vector<unsigned char> = a special type that works well with hex

int serialize_int(int data) {
	int elem; 
	int position = 1;
	int length = sizeof(data);
	int counter = 1;
	//Traverse from 0 to length 
	for(int i = 0; i <= length; i++) {
		for(int j = 0; j < counter; j++) {
			position = position * 10;
		}
		if(data % 10 % 2 == 0) {
			elem += 5 * (data % 10) * (10 * (i+1));
			data /= 10;
		}
		else if(data % 10 % 2 == 1) {
			elem += 7 * (data % 10) * (10 * (i+1));
			data /= 10;
		}
		counter++;
	}	
	return elem;
}	
int serialize_string(char *data) {
	int elem; 
	int position = 1;
	int length = sizeof(data);
	int counter = 1;

	for(int i = 0; i < length; i++) {
		for(int j = 0; j < length; j++) {
 
		}
	}
	free(data);
	return 0;
}
int serialize_int_field(char *name, int data) {
	return 0;
}
int serialize_string_field(char *name, char *data) {
	return 0;
}
// int serialize_message(Message msg) {
// 	return 0;
// }

int main() {
	int serialized_Integer = serialize_int(343434);
	printf("The new number = %d\n", serialized_Integer);
	return 0;
}
