//It calculates factorial that enter the number by user.

#include <stdio.h>

int factorial (int number){             //This function for that it calculates the factorial.
	int fact=1;
	
	for(;number>0;number--){
		
		fact *= number;
		
	}
	
	return fact;
}

int main(){
	int number;
	
	printf("Enter the number:");
	scanf("%d",&number);
	
	printf("Faktorial: %d",factorial(number));            //We calculated factorial easily with this function.
	
	return 0;
	
}
