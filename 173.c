#include<stdio.h>
int main()
{
	_Bool seat[100]={0},f=0;
	short n=0;
	scanf("%hd",&n);
	short p[n],bp[n][5];  /*bp[][] seat position;p[] number*/
	short i=0,j=0,t=0,k=0;
	for(i=0;i<n;i++)  scanf("%hd",p+i);
	for(i=0;i<n;i++)
	{
		for(j=0,f=0;j<20;j++)
		{
			k=j*5;
			while(seat[k]==1&&k<j*5+5)  k++;
			if(j*5+5<p[i]+k)  continue;
			t=k;
			for(k=0;k<p[i];k++)
			{
				seat[k+t]=1;
				bp[i][k]=t+k;
				f=1;
			}
			if(f)  break;
		}
		if(j==20)
		{
			for(k=0,t=0;t<n&&k<100;k++)
			{
				if(seat[k]==0)
				{
					bp[i][t]=k;
					seat[k]=1;
					t++;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<p[i];j++)
		{
			printf("%hd ",bp[i][j]+1);
		}
		printf("\n");
	}
	return 0;
}
