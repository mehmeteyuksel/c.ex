//It calculates sum of line that array.

#include <stdio.h>

int main(){
	int i,j,l,c;
	int sum=0;
	int matris[l][c];
	//Enter the informations of matris.
	printf("Enter the line:"); 				
	scanf("%d", &l);
	printf("Enter the column:");
	scanf("%d", &c);
	
	//Enter the elements of matris.
	for(i=0; i<l; i++){
	
		for(j=0; j<c; j++){
			
			printf("Enter the elements of array:");
			scanf("%d",&matris[i][j]);
		} 
		
	
	}
	
	//Print the matris.
	for(i=0; i<l; i++){
	
		for(j=0; j<c; j++){
			
			printf("%d ",matris[i][j]);
		
		} 
		printf("\n");
	
	}
	//It calculates sum of columns.
	for(j=0; j<c; j++){				//It runs columns because this "for" starts j not i.
		for(i=0;i<l;i++){
			
			sum += matris[i][j];
		}
		printf("Sum of columns: %d ",sum);
		sum=0;
		
		
	}
	
	
	//It calculates sum of line.
	for(i=0; i<l; i++){				//It runs line because this "for" starts j not i.
		for(j=0;j<c;j++){
			
			sum += matris[i][j];
		}
		printf("Sum of line: %d",sum);
		sum=0;
		
		
	}
	
	return 0;

	
}
