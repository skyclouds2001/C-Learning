#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char older[51]={'\0'},newer[101]={'\0'},t=0;
	gets(older);
	short n=0,i=0,j=0,k=0;
	n=strlen(older);
	for(i=0;i<n;i++)
	{
		if(isalpha(older[i]))
		{
			newer[k]=older[i];
			k++;
		}
		else if(isdigit(older[i]))
		{
			if(isdigit(older[i+1]))
			{
				t=older[i-1];
				for(j=atoi(older+i)-1;j>0;j--)
			    {
				    newer[k]=t;
				    k++;			
			    }
				i++;
			}
			else
			{
				t=older[i-1];
			    for(j=atoi(older+i)-1;j>0;j--)
			    {
				    newer[k]=t;
				    k++;			
			    }
			}			
		}
	}
	puts(newer);
	return 0;
 } 
