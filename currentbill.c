#include<stdio.h>
void main()
{
	int  id;
	float units,total,surcharges=0.00,amt;
	printf("enter  id:");
	scanf("%d",&id);
	printf("enter units consumed:");
	scanf("%f",&units);
	if(units<199)
	{
		amt=units*1.20;
		printf("amount is: %f\n",amt);
	}
	else if(units>200 && units<400)
	{
		amt=units*1.50;
		printf("amount is: %.2f\n",amt);
	}
	else if(units>400 && units<600)
	{
		amt=units*1.80;
		printf("amount is: %f\n",amt);
	}
	else if(units>600)
	{
		amt=units*2.00;
		printf("amount is: %f\n",amt);
	}
	if(amt>400)
	{
		surcharges=amt*0.15;
		printf("surcharges is: %f\n",surcharges);
	
	}
	
}