#include<stdio.h>
#include<string.h>
int main()
{
	char str[10][20]={'\0'},t=0;
	short i=0,j=0;
	short N=0;
	scanf("%hd",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s",&str[i][0]);
	}
	void wd_sort(short,char*);
	wd_sort(N,&str[0][0]);
	for(i=0;i<N;i++)
	{
		for(j=0;str[i][j]!='\0'&&j<20;j++)
		{
			printf("%c",str[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
void wd_sort(short n,char*p)
{
	short i=0,j=0,k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(p+j*20,p+(j+1)*20)>0)
			{
				char ls[21]={'\0'};
				strcpy(ls,p+j*20);				
				strcpy(p+j*20,p+(j+1)*20);
				strcpy(p+(j+1)*20,ls);
			}
		}
	}
}
