#include<stdio.h>
#include<assert.h>


float calcRemainingFuel (int vehicleType, float usedFuelQuota);
float calcFuelcost (int vehicleType, float usedFuelQuota);
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost);

int main(void)
{
	int type;
	float usedQuota;
	
	assert(calcRemainingFuel(1,3.00)==2.00);
	assert(calcRemainingFuel(4,25.00)==5.00);
	
	printf("Enter the vehicle type :");
	scanf("%d",&type);
	
	while(type!=-1){
		printf("\nEnter used quota :");
		scanf("%f",&usedQuota);
		
		 calcRemainingFuel (type,usedQuota  );
		 calcFuelcost (type,  usedQuota);
	 
		 displayDetails( type,  usedQuota,  calcRemainingFuel (type,usedQuota  ), calcFuelcost (type,  usedQuota));
		 
		 	printf("\n\nEnter the vehicle type :");
		 	scanf("%d",&type);
		 }
		 return 0;
		 
		 	
}
float calcRemainingFuel (int vehicleType, float usedFuelQuota){
	float remainFuel;
	if(vehicleType==1){
		remainFuel = 5.00-usedFuelQuota;
	}
	else if(vehicleType==2){
		remainFuel = 20.00-usedFuelQuota;
	}
	else if(vehicleType==3){
		remainFuel = 20.00-usedFuelQuota;
	}
	else if(vehicleType==4){
		remainFuel = 30.00-usedFuelQuota;
	}
	else{
		return 0;
	}
	return remainFuel;
}
float calcFuelcost (int vehicleType, float usedFuelQuota){
	float fuelCost;
	if(vehicleType==1){
		fuelCost = 370.0*usedFuelQuota;
	}
	else if(vehicleType==2){
		fuelCost = 370.0*usedFuelQuota;
	}
	else if(vehicleType==3){
		fuelCost = 510.0*usedFuelQuota;
	}
	else if(vehicleType==4){
		fuelCost = 510.0*usedFuelQuota;
	}
	else{
		return 0;
	}
	return fuelCost;
	
}
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost){
	printf("\n%s%20s%20s%15s","vehicle type","Quota used","Quota remaining","Fuel cost");
	printf("%d%30.2f%20.2f%18.2f",vType,usedFuelQuota,remainingQuota,cost);
}







		 
		 


		
		
	
	


