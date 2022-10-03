#include<stdio.h>
int main()
{
	short score[1000];
	int scores=0;
	short i=0,t=0,f=0;
	do
	{
		scanf("%hd",&score[i]);
		t=score[i];
		if(t==0)
		{
			f=0;
			printf("%d",scores);
			break;
		}
		else if(t==1)
		{
			f=0;
			scores++;
		}
		else if(t==2)
		{
			f++;
			scores+=(f*2);
		}
		i++;
	}while(1);
	return 0;
 } 
