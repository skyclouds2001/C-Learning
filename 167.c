#include<stdio.h>
typedef struct{
	short num;
	short N;
}nnn;
int main()
{
	short n=0;
	short i=0,j=0,k=0,t=0;
	scanf("%hd",&n);
	short a[n];
	nnn b[n];
	for(i=0;i<n;i++)
	{
		scanf("%hd",a+i);
		b[i].N=0;
	}
	for(i=0,k=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			if(b[j].num==a[i])
			{
				b[j].N++;
				break;
			}
		}
		if(j==k)
		{
			b[k].num=a[i];
			b[k].N++;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i-1;j++)
		{
			if(b[j].N<b[j+1].N||b[j].N==b[j+1].N&&b[j].num>b[j+1].num)
			{
				t=b[j].N;  b[j].N=b[j+1].N;  b[j+1].N=t;
				t=b[j].num;  b[j].num=b[j+1].num;  b[j+1].num=t;
			}
		}
	}
	for(i=0;i<k;i++)  printf("%hd %hd\n",b[i].num,b[i].N);
	return 0;
 } 
