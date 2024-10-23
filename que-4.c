
// create a c program that defines a function to check if a given number  is divisible by both 3 and 5 or not.

#include <stdio.h>

// user define function

int divided(int num1){
	
	printf("enter the number: ");
	scanf("%d",&num1);
	
	if (num1%3 == 0 && num1%5 == 0){
		
		printf("the given %d is divisible by both 3 and 5", num1);
		
	} else{
		
		printf("the given %d is not divisible by both 3 and 5", num1);
		
	}
}

// main function

int main (){
	
	int num1;
	
	divided(num1);
	
	return 0;
}
