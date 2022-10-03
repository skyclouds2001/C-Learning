#include<stdio.h>
#include<stdlib.h>
int main()
{
	short a[100]={0};
	short i=0,j=0,t=0,p=0,q=0,search=0,result=0,flag=0;
	srand(1);
	for(i=0;i<100;i++)	
		a[i]=rand();					
	for(i=0;i<100;i++)    //Ã°ÅÝÅÅÐò|ÉýÐò&×ÔÇ°Íùºó
	{
		for(j=0;j<99-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0,j=0;i<100;i++)
	{
		printf("%hd ",a[i]);
		j++;
		if(j==10)
		{
			printf("\n");
			j=0;
		}
	}
	printf("\n");
	scanf("%hd",&search);	
	p=0;  q=99;  flag=0;
	do
	{
		t=(p+q)/2;
		if(a[t]==search)
		{
			result=t;
			flag=1;
			break;
		}
		else if(a[t+1]==search)
		{
			result=t+1;
			flag=1;
			break;
		}
		else if(a[t-1]==search)
		{
			result=t-1;
			flag=1;
			break;
		}
		else if(a[t]<search)
		    p=t+1;
		else if(a[t]>search)
		    q=t-1;
	 }while(p<=q);
	if(flag==1)  
	    printf("%hd",result+1);
	else  
	    printf("not found yet");
	return 0;  
}
