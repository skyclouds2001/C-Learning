#include<stdio.h>
#include<memory.h>
typedef struct student_score{
	int id;
	char name[11];
	short score1;
	short score2;
	short score3;
	float aver_score;
}SS;
int main()
{
	short N=0;
	scanf("%hd",&N);
	SS stu[N],*pstu[N],*t=0;
	short i=0,j=0;
	for(i=0;i<N;i++)
	{
		pstu[i]=stu+i;
		memset(stu+i,0,sizeof(char)*11);
		scanf("%d %s%hd%hd%hd",&(stu+i)->id,(stu+i)->name,&(stu+i)->score1,&(stu+i)->score2,&(stu+i)->score3);
		(stu+i)->aver_score=(float)((stu+i)->score1+(stu+i)->score2+(stu+i)->score3)/3.0;
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(pstu[j]->aver_score<pstu[j+1]->aver_score||pstu[j]->aver_score==pstu[j+1]->aver_score&&pstu[j]->id>pstu[j+1]->id)
			{
				t=pstu[j];  pstu[j]=pstu[j+1];  pstu[j+1]=t;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d %s %.1f\n",pstu[i]->id,pstu[i]->name,pstu[i]->aver_score);
	}
	return 0;
}
