#include<stdio.h>
#include<string.h>
int main()
{
	char ch=0,str[51]={0};
	short n=0,i;
	gets(str);
	ch=getchar();
	void dele(char*,char);
	dele(str,ch);
	n=strlen(str);
	for(i=0;i<n;i++)  printf("%c",str[i]);
	return 0;
}
void dele(char*s,char a)
{
	short i,j,n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(a==*(s+i))  *(s+i)=0;
	}
	for(i=n-1;i>=0;i--)
	{
		if(*(s+i)==0)
		{
			for(j=i;j<n;j++)
			{
				*(s+j)=*(s+j+1);
				*(s+j+1)=0;
			}
		}
	}
	for(i=n;i<51;i++)
	{
		*(s+i)='\0';
	}
}
