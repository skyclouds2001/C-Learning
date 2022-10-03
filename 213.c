#include<stdio.h>
int main()
{
	int num[50]={0};
	short m=0,n=0;
	short i=0,j=0;
	scanf("%hd%hd",&m,&n);
	int mat[m][n];
	void place(int*,int*,short,short);
	for(i=0;i<m*n;i++)  scanf("%d",num+i);
	place(num,&mat[0][0],m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",mat[i][j]);
		}
		if(i!=m-1)  printf("\n");
	}
	return 0;
}
void place(int*p,int*q,short m,short n)
{
	short i=0,j=0,k=0;
	int t=0;
	for(i=0;i<m*n;i++)
	{
		for(j=0;j<m*n-i-1;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				t=*(p+j);  *(p+j)=*(p+j+1);  *(p+j+1)=t;
			}
		}
	}
	for(i=0,k=0;i<m;i++)
	{
		for(j=n-1;j>=0&&i%2==0;j--,k++)
		{
			*(q+i*n+j)=*(p+k);
		}
		for(j=0;j<n&&i%2==1;j++,k++)
		{
			*(q+i*n+j)=*(p+k);
		}
	}
}
