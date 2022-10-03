#include<stdio.h>
#include<stdlib.h>
short b[1000]={0};
short checkb(short x);
int max(int x,int y)
{
	if(x>y)  return x;
	else return y;
}
int main()
{	
	short a[1000]={0},c[1000]={0};
	int i,j,k=0,t;
	srand(1);
	for(i=0;i<1000;i++)
	{
		a[i]=rand()/328;
	}
	srand(50);
	for(j=0;j<1000;j++)
	{
		b[j]=rand()/328;
	}
	for(i=0;i<1000;i++)
	{
		if(checkb(a[i]))
		{
			c[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k-1;i++)
	{
		for(j=0;j<k-i;j++)
	    {
	    	if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			}		
	    }
	}
	for(i=0;i<k;i++)
	{
		printf("%d  ",c[i]);
	}
	return 0;
}
short checkb(short x)
{
	int i;
	for(i=0;i<1000;i++)
	{
		if(b[i]==x)  return 1;
	}
	return 0;
}
