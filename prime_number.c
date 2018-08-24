//It checks that prime number.

#include <stdio.h>

int main(){
	int number,cp,i;
	
	printf("Enter the number:");
	scanf("%d",&number);
	
	for(i=2;i<=number/2;i++)
	{
	if(number%i==0)
	{
		cp=1;
		break;
	}
	
	}
	if(cp==0)
	{
		printf("The number is a prime number!");
		
	}
	else
	{
		printf("The number is NOT a prime number!");
	}
	
	return 0;
}
