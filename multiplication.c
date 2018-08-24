//It multiplier the number until the range that enter it by user.

#include <stdio.h>

int main(){
	int number;
	int range,i;
	
	printf("Enter the number:");
	scanf("%d",&number);
	
	printf("Enter the range:");
	scanf("%d",&range);
	
	
	for(i=1; i<=range; i++){
	
		printf(" %d * %d = %d\n ",number,i,number*i);
		
	}
	
	return 0;
}
