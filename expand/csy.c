#include "csy.h"

int isprime(int x)
{
	if(x<0)		return -1;
	else if(x==0||x==1)		return 0;
	else if(x==2||x==5)	return 1;
	else if(x%2==0||x%5==0)		return 0;
	else
	{
		int i=0;
		for(i=3;i<x;i++)
		{
			if(x%i==0)	return 0;
		}
	}
	return 1;
}

void sort_fast(int *a,int l,int r)
{
	if(l>=r)  return;		
	else
	{
		int i=l,j=r;
		int k=rand()%(r-l+1)+l;
		int x=*(a+k);
		*(a+k)=*(a+i);
		while(i<j)
		{		
			for(;*(a+j)>x&&i<j;j--)  ;
			if(i<j)  *(a+i)=*(a+j);
			for(;*(a+i)<=x&&i<j;i++)  ;
			if(i<j)  *(a+j)=*(a+i);
		}
		*(a+i)=x;	
		sort_fast(a,l,i-1);
		sort_fast(a,i+1,r);
	}
}
