#include<stdio.h>
#include<string.h>

int main(void){
	char emp[10],search[10];
	char name[20];
	int a[7];
	int i,j,marks;
	 
	FILE *fp;
	fp=fopen("attendance.dat","w");
	
	if(fp==NULL){
		printf("File cannot be saved");
		return -1;
	}
	
	for(i=0;i<2;i++){
		printf("Employee No : ");
		scanf("%s",&emp);
		
		printf("Name : ");
		scanf("%s",&name);
		fprintf(fp,"%s %s ",emp,name);
		
		for(j=0;j<7;j++){
			printf("Enter attendance of day %d : ",j+1);
			scanf("%d",&a[j]);
			
			fprintf(fp,"%d ",a[j]);
		}
		
		fprintf(fp,"\n");
	}
	fclose(fp);
	
	
	fp=fopen("attendance.dat","r");
	
	if(fp==NULL){
		printf("File cannot be opened");
		return -1;
	}
	
	printf("Enter Employee  to search : ");
	scanf("%s",&search);
	
	
	fscanf(fp,"%s %s ",emp,name);
	while(!feof(fp)){
		
		if(strcmp(search,emp)==0){
			for(j=0;j<7;j++){
				fscanf(fp,"%d ",&a[j]);
				
				if(a[j]==1){
					marks++;
				}
			}
			
		printf("Name : %s\n",name);
		printf("Total Days worked : %d",marks);
		return 0;
		}	
		fscanf(fp,"%s %s",emp,name );
	}
	
	printf("Employee not found");
	
	fclose(fp);
	return 0;
}
