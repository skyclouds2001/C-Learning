#include<stdio.h>
#include<ctype.h>
#include<string.h> 
int main()
{
	char str[81]={'\0'},t;
	short i=0,j=0,p=0,q=0,n=0;
	gets(str);
	n=strlen(str);
	while((t=str[i])!='\0')
	{
		if(islower(t))  t-=32;		
		str[i]=t;
		i++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			p=j;
			while(!isalpha(str[p])&&p<n) p++;
			q=p+1;
			while(!isalpha(str[q])&&q<n) q++;
			if(str[p]>str[q]&&q<n&&p<n)
			{
				t=str[p]; str[p]=str[q]; str[q]=t;
			}
		}
	}
	puts(str);
	return 0;
 } 
