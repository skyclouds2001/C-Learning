#include<stdio.h>
#include<stdlib.h>

int main()
{
	float price,elec;
	printf("please input electricity: \n");
	scanf("%f",&elec);
	if(elec<=110&&elec>=0)
	{
		price=elec*0.5;
	}
	else if(elec>110&&elec<=210)
	{
		price=110*0.5+(elec-110)*0.55;
	}
	else if(elec>210)
	{
		price=110*0.5+(210-110)*0.55+(elec-210)*0.7;
	}
	else
	{
		printf("input eror"); exit(-1);
	}
	printf("price=%.2f",price);
	return 0 ;
}
