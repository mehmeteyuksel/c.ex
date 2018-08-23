//Basic C example, It counts digit and sum of numbers.

#include <stdio.h>


int main()
{
	int n, digit=0, sum = 0;
	
	printf("\nEnter the number : ");
	scanf("%d", &n);
	
	while(n > 0) {
	
		sum += (n % 10);     //We divided n with %10 for sum of numbers.
		digit++;				//We counted digit.
		n /= 10;			//We divided n w/10  n become >0.
	
	}
	
	printf("\nSum of Numbers : %d  \nDigit of Numbers: %d ",sum ,digit);
		
	return 0;
}
