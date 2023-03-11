#include<stdio.h>
int main(void){
	char led[4][4];
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Enter the color for row %d column %d (R/G/B) : ",i,j);
			scanf(" %c",&led[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++){		
		for(j=0;j<4;j++){
			printf("%c ",led[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++){		
		for(j=0;j<4;j++){
			if(led[i][j]=='R'){
				printf("[%d,%d] ",i,j);
			}
		}
	}
	return 0;
}

	
