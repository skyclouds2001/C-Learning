#include<stdio.h>
int main()
{
	int num[20]={0};
	short n=0,i;
	scanf("%hd",&n);
	for(i=0;i<n;i++) scanf("%d",num+i);
	void change(int*,short);
	change(num,n);
	for(i=0;i<n;i++) printf("%d ",num[i]);
	return 0;
}
void change(int*a,short n)
{
	int max=0,min=0,t;
	short i;
	for(i=0;i<n;i++)
	{
		if(*(a+max)<*(a+i)) max=i;
		if(*(a+min)>*(a+i)) min=i;
	}
	t=*(a+max); *(a+max)=*(a+min); *(a+min)=t;
}
