#include<stdio.h>
int main()
{
	char a[1000]={0},b[1000]={0};
	gets(a);
	gets(b);
	short i=0,j=0,k=0,flag=0,flagall=0;
	do
	{
		if(a[i]==b[0])
		{
			flag=1;
			k=i;
			do
			{
				if(a[k]!=b[j])
				{
					flag=0;
					break;
				}
				j++;
				k++;
			}while(b[j]!='\0');
			if(flag==1&&b[j]=='\0')
			{
				printf("%hd ",i+1);
				flagall=1;
			}
			j=0;
		}
		i++;
	}while(a[i]!='\0');
	if(flagall==0)
	{
		printf("-1");
	}
	return 0;
 } 
