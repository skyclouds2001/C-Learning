#include<stdio.h>
typedef struct point{
	short x;
	short y;
}POINT;
int main()
{
	short N=0,M=0;
	scanf("%hd%hd",&N,&M);
	POINT lh[N+1],rb[N+1],com[M];
	short i=0,j=0;
	short flow[N+1];
	for(i=0;i<N;i++)  	
	{
		flow[i]=i+1;
		scanf("%hd%hd%hd%hd",&((lh+i)->x),&((lh+i)->y),\
		&((rb+i)->x),&((rb+i)->y));
	}
	for(j=0;j<M;j++)  scanf("%hd%hd",&((com+j)->x),&((com+j)->y));
	for(j=0;j<M;j++)
	{
		for(i=N-1;i>=0;i--)
		{
			if(com[j].x>=lh[i].x&&com[j].x<=rb[i].x&&\
			com[j].y>=lh[i].y&&com[j].y<=rb[i].y)  break;
		}
		if(i==N-1)  printf("%hd\n",flow[i]);
		else if(i<0)  printf("IGNORED\n");
		else if(i>=0&&i<N-1)
		{
			printf("%hd\n",flow[i]);
			lh[N]=lh[i];
			rb[N]=rb[i];
			flow[N]=flow[i];
			while(i<N)
			{
				lh[i]=lh[i+1];
				rb[i]=rb[i+1];
				flow[i]=flow[i+1];
				i++;
			}
		}
	}
	return 0;
 } 
