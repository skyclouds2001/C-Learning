#include<stdio.h>
typedef struct student_test{
	char name[20];
	short q1;
	short q2;
	short q3;
	short q4;
	short q5;
	short qall;
	short qadd;
}ST;
int main()
{
	short N=0;
	scanf("%hd",&N);
	getchar(); 
	ST stu[N],*pstu[N],*t=0;
	short i=0,j=0;
	for(i=0;i<N;i++)
	{
		pstu[i]=stu+i;
		scanf("%s %hd %hd %hd %hd %hd %hd",pstu[i]->name,&pstu[i]->q1,&pstu[i]->q2,&pstu[i]->q3,&pstu[i]->q4,&pstu[i]->q5,&pstu[i]->qadd);
		pstu[i]->qall=pstu[i]->q1+pstu[i]->q2+pstu[i]->q3+pstu[i]->q4+pstu[i]->q5+pstu[i]->qadd;
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(pstu[j]->qall<pstu[j+1]->qall||pstu[j]->qall==pstu[j+1]->qall\
			&&pstu[j]->qadd<pstu[j+1]->qadd)
			{
				t=pstu[j];  pstu[j]=pstu[j+1];  pstu[j+1]=t;
			}
		}
	}
	for(i=0;i<N;i++)
	{		
		printf("%s %hd %hd\n",pstu[i]->name,pstu[i]->qall,pstu[i]->qadd);
	}
	return 0;
}
