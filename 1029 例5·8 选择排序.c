//升序、自前向后比较 
#include<stdio.h>
int main()
{
	int i,j;
	int a[10];
	int t,p;
	printf("Please input 10 numbers:  \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		t=a[i];
		p=i;
		for(j=i;j<10;j++)
		{
			if(t>a[j])
			{
				t=a[j];
				p=j;
			}
		}
		if(p!=i)
		{
			t=a[i];
			a[i]=a[p];
			a[p]=t;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
