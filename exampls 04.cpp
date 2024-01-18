#include<stdio.h>
int main(void)
{
	float size[3][5];
	float total = 0;
	float avgSize[3] = {0,0,0};
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("Enter chocalate  ");
			scanf("%f",&size[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			total = total + size[i][j]; 
			 
		}
		avgSize[i] = total/5.00;
		total = 0;
		
		printf("machine %d\t\t%.2f\n",i+1,avgSize[i]);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
