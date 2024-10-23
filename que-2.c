
/* develop a c program that reads sentence from the user. Create a function 
	to count the occurrences of each consonant  in the sentence and display the count*/
 
#include <stdio.h>

// user define function

char counter( char string[1000]){
	
	char alpha;
	int count, i;
	
	for(alpha = 'a'; alpha <='z'; alpha++){
		count = 0;
		
		for(i=0; string[i] != '\0'; i++){
			
			if(string[i] == alpha){
				count++;
			}
			
		}
		
		if(count>0){
			
			if(alpha !='a' && alpha != 'e' && alpha != 'i' && alpha != 'o' && alpha != 'u'){
				printf("%c : %d\n", alpha,count);
			}
		}
	}
}

// main function

int main(){
	
	char string[1000];
	
	printf("enter the string: ");
	scanf("%s",&string);
	
	counter(string);
	
return 0;	
}