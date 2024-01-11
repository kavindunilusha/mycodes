#include<stdio.h>
int main(void)
{
	int itemCode,i;
	char itemName[30];
	float itemPrice;
	
	FILE *item;
	
	item = fopen("items.dat","w");
	
	printf("Enter  Code :");
	scanf("%d",&itemCode);
	
	fprintf(item,"%d  ",itemCode);
	
	printf("Enter Item Nmae :");
	scanf("%s",&itemName);
	
	fprintf(item,"%s  ",itemName);
	
	printf("Enter Item Price please:");
	scanf("%f",&itemPrice);
	
	fprintf(item,"%.2f  ",itemPrice);
	
	fclose(item);
	
	item = fopen("items.dat","r");
	fscanf(item,"%d  %s  %f",&itemCode,&itemName,&itemPrice);
	
	while(!feof(item)){
		fprintf("%d %s%f\n",itemCode, itemName, itemPrice );
		fscanf(item,"%d  %s  %f",&itemCode,&itemName,&itemPrice);
		i++;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
} 





