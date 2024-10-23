
/* develop a c program that uses a structure to represent a mobile (with attributes like company_name,color,model and price). 
	list n number of mobiles details using array of object. */

#include <stdio.h>

 struct mobiles{
 	
 	char company_name[10];
 	char color[10];
 	char model[10];
 	int price;
 	
 };

int main(){
	
	int n,i;
	
	printf("enter the number: ");
	scanf("%d", &n);
	
	struct mobiles mobiles[n];
	
	for(i = 0 ; i<n; i++){
		printf("\nthe details of mobiles %d\n" ,i+1);
		printf("enter the company name: ");
		scanf("%s",&mobiles[i].company_name);
		
		printf("enter the color name: ");
		scanf("%s",&mobiles[i].color);
		
		printf("enter the model name: ");
		scanf("%s",&mobiles[i].model);
		
		printf("enter the price: ");
		scanf("%d",&mobiles[i].price);
		
	}
	
		for(i = 0 ; i<n; i++){
		
		printf("\nthe details of mobiles %d\n" ,i+1);	
		printf("company: %s\n",mobiles[i].company_name);
		
		printf("color: %s\n",mobiles[i].color);
		
		printf("model: %s\n",mobiles[i].model);
		
		printf("price: %d\n",mobiles[i].price);
		
		
	}
	
	return 0;
}
