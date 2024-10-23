
// write  a c program that prompts th user to enter a 3 digit's positive integer.find the sum of first and last digit.

#include <stdio.h>

int main(){
	
	int num1,num2,num3,result,count = 0;
	
	printf("enter the number: ");
	scanf("%d",&num1);
	
	num3= num1%10;
	
	while(num1>10){	
		num1/=10;	
	}
	
	num2 = num1;
	result = num2 + num3;
	
	printf("the total of first and last digit is : %d",result); 

return 0;	
}
