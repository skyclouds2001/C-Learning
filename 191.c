#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[7]={'\0'};
	short i;
	for(i=0;i<7;i++)
	{
		scanf("%c",a+i);
		if(isupper(a[i]))
		{
			a[i]+=25-(a[i]-'A')*2;
		}
		if(islower(a[i]))
		{
			a[i]+=25-(a[i]-'a')*2;
		}
	}
	for(i=0;i<7;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
