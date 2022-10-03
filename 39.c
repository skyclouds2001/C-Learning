#include<stdio.h>
int main()
{
	short m,n;    //n,p,x:ÐÐ m,q,y:ÁÐ
	short i,j;
	short p,q;
	int flag=0,count=0;
	scanf("%hd%hd",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}	 
	for(i=0;i<n;i++)
	{		
		for(j=0;j<m;j++)
		{			
			flag=1;
			for(p=0;p<m&&flag;p++)
			{
				if(a[i][j]>a[i][p]) flag=0;
			}
			for(q=0;q<n&&flag;q++)
			{
				if(a[i][j]<a[q][j]) flag=0;
			}
			if(flag) 
			{
				printf("%hd %hd %d \n",i,j,a[i][j]);
				count++;
			}			
		}
    }
	if(count==0)  printf("no");
	printf("\n");
	return 0;
}
