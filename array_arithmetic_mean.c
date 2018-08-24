//It calculates arithmetic mean that enter the number by user.

#include <stdio.h>

int main(){
	int n,i;
	float numbers[n];
	float sum=0;
	char name[10];
	
	printf("Enter the Name:");
	scanf("%s",name);                       //This is important because We didn't use & before name.
	
	printf("Hi! %s\n",name);
	
	printf("Enter the number of array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Enter the elements of array:");
		scanf("%f",&numbers[i]);
	}

	
	for(i=0; i<n; i++){
		sum += numbers[i];
		
	}
	
	printf("Arithmetic Mean: %.2f",sum/n);
	
	return 0;
}
