#include<stdio.h>
int main()
{
	int num[20]={0};
	short N=0,i;
	scanf("%hd",&N);
	void sort(int*,short);
	for(i=0;i<N;i++) scanf("%d",num+i);
	sort(num,N);
	for(i=0;i<N&&num[i]%2==1;i++) printf("%d ",num[i]);
	printf("  ");
	for(;i<N;i++) printf("%d ",num[i]);
	return 0;
}
void sort(int*a,short n)
{
	short i,j;
	int t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if((*(a+j)%2==0&&*(a+1+j)%2==1)||(*(a+j)%2==*(a+1+j)%2&&*(a+j)>*(a+1+j)))
			{
				t=*(a+j);  *(a+j)=*(a+j+1);  *(a+j+1)=t;
			}
		}
	}
}
