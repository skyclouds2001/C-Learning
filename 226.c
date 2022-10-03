#include<stdio.h>
#include<string.h>
int main()
{
	char ss[1000]={'\0'},t=0;
	int n=0,i,j;
	gets(ss);
	n=strlen(ss);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ss[j]>ss[j+1])
			{
				t=ss[j+1];ss[j+1]=ss[j];ss[j]=t;
			}
		}
	}
	puts(ss);
	return 0;
}
