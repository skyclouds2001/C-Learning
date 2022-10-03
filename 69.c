#include<stdio.h>
int main()
{
	short m=0,n=0;
	scanf("%hd%hd",&m,&n);
	short i=0,j=0,p=0,q=0,max=0,maxi=0;
	short a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%hd",a[i]+j);
		}
	}
	for(i=0;i<m;max=0,i++)
	{
		for(j=0;j<n;p=0,q=0,j++)
		{
			if(a[i][j])
			{
				p=j;
				for(q=p+1;a[i][q]&&q<n;q++)  ;
				(max<q-p)?(max=q-p,maxi=p):1;
				j=q-1;
			}
		}		
		(max!=0)?(printf("%hd %hd\n",maxi,maxi+max-1)):\
		(printf("-1 -1\n"));
	}	
	return 0;
} 
