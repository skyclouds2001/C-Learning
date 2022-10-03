#include<stdio.h>
int main()
{
	short n=0,count=0;
	scanf("%hd",&n);
	short f[n-1];
	int num[n];
	short i=0,j=0;
	for(i=0;i<n-1;i++)  f[i]=0;
	while(1)
	{
		for(i=0;i<n;i++)  num[i]=i+1;
		for(i=0;i<n-1;i++)  /*deal' '*/
		{
			if(f[i]==0)
			{
				num[i]*=10;
				num[i+1]+=num[i];
				num[i]=0;
			}			
		}
		for(i=0;i<n-1;i++)
		{
			if(f[i]==1)  /*deal'+'*/
			{
				if(num[i+1]!=0)
				{
					num[i+1]+=num[i];
					num[i]=0;
				}
				else
				{
					j=i+1;
					while(num[j]==0&&j<n-1)  j++;
					num[j]+=num[i];
					num[i]=0;
					i=j-1;
				}
			}
			else if(f[i]==2)  /*deal'-'*/
			{
				if(num[i+1]!=0)
				{
					num[i+1]=num[i]-num[i+1];
					num[i]=0;
				}
				else
				{
					j=i+1;
					while(num[j]==0&&j<n-1)  j++;
					num[j]=num[i]-num[j];
					num[i]=0;
					i=j-1;
				}
			}
		}
		if(num[n-1]==0)  count++;	
		for(i=0,f[0]++;i<n-2;i++)
		{
			if(f[i]==3)
			{
				f[i+1]++;
				f[i]=0;
			}
			else break;
		}
		if(f[n-2]==3)  break;
	}
	printf("%hd",count);
	return 0;
 } 
