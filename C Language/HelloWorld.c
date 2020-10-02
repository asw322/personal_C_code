# include <stdio.h>



  int main(){

  	int n = 5; //dynamic size
  	char * pvowels = (char *) malloc(n * sizeof(char));

  	int i; //iterator

  	pvowels[0] = 'A'; //store the value of char A to the 0th index of pvowels
  	pvowels[1] = 'E';
  	*(pvowels + 2) = 'I'; //store the value of char I to the pointer of the 2nd index of pvowels
  	pvowels[3] = 'O';
  	*(pvowels + 4) = 'U';

  	for(i = 0; i < n; i++) {
  		printf("%c ", *(pvowels + i));
  	}
  	printf("\n");


  	return 0;
}