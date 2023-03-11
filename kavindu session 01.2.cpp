#include<stdio.h>
#include<assert.h>
float calcInterest (int FDType,float depositAmount);
float calcTax(float annuallnterest);
void displayDetails(float interest, float taxAmount);




int main(void)
{
	assert(calcInterest(1,100000)==16000);
	assert(calcInterest(2,100000)==15000);
	
	float d_amount;
	int type;
	
	printf("Enter the fd type :");
	scanf("%d",&type);
	
	while(type!=-1){
		printf("\nEnter fixed deposite amount :");
		scanf("%f",&d_amount);
		
		calcInterest (type,d_amount);
		calcTax(calcInterest (type,d_amount));
		displayDetails(calcInterest (type,d_amount),calcTax(calcInterest (type,d_amount) ));
		
		printf("\n\nEnter the fd type :");
		scanf("%d",&type);
		
		
	
		
		
		
		
		
		
	}
	return 0;

	
}
float calcInterest (int FDType,float depositAmount){
	float interest;
	
	if(FDType==1){
		interest = depositAmount*16.0/100;
	}
	else if(FDType==2){
		interest = depositAmount*15.0/100;
	}
	else if(FDType==3){
		interest = depositAmount*15.5/100;
	}
	else if(FDType==4){
		interest = depositAmount*17.5/100;
	}
	else{
		return 0;
	}
	return interest;
	
}
float calcTax(float annuallnterest){
	float tax;
	
	tax = annuallnterest*10.0/100;
	return tax;
}
void displayDetails(float interest, float taxAmount){
	
		float amount=interest-taxAmount;
		printf("\n%s%16s%29s","Annual Interest","Tax Amount","Amount Payable");
		printf("\n\n%.2f%20.2f%30.2f",interest,taxAmount,amount);
	
	
}













