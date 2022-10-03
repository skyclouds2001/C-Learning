#include<stdio.h>
#include<string.h>
int main()
{
	char s[101]={'\0'},t=0;
	gets(s);
	char midc=s[0];
	short n=strlen(s);
	short i=0,j=0;
	short p=0,q=0;
	char big[100]={'\0'},small[100]={'\0'};
	for(i=1;i<n;i++)
	{
		if(s[i]>midc)
		{
			big[p]=s[i];
			p++;
		}
		else if(s[i]<=midc)
		{
			small[q]=s[i];
			q++;
		}
    }
	short nsmall=strlen(small);
	for(i=0;i<nsmall;i++)
	{
		for(j=0;j<nsmall-i-1;j++)
		{
			if(small[j]>small[j+1])
			{
				t=small[j];  small[j]=small[j+1];  small[j+1]=t;
			}
		}			
	}
	printf("%s%c%s",big,midc,small);
	return 0;
}
