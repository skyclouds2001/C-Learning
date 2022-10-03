#include<stdio.h>
short m=0,n=0;
int main()
{
	int num[50]={0};	
	scanf("%hd%hd",&m,&n);
	short i,j;
	for(i=0;i<m*n;i++)  scanf("%d",num+i);
	void place(int*);
	place(num);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)  printf("%d ",num[i*n+j]);
		if(i!=m-1)  printf("\n");
	}
	return 0;	
} 
void place(int*a)
{
	short i,j;
	int t;
	for(i=0;i<m*n;i++)
	{
		for(j=0;j<m*n-1-i;j++)
		{
			if(*(a+j)>*(a+j+1))
			{
				t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t;
			}
		}
	}
	for(i=0;i<m;i+=2)
	{
		for(j=0;j<n/2;j++)
		{
			t=*(a+i*m+j);
			*(a+i*m+j)=*(a+i*m+n-j-1);
			*(a+i*m+n-j-1)=t;
		}
	}
}
