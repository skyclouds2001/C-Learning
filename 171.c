#include<stdio.h>
struct student{
	short id;
	short h1;
	short m1;
	short h2;
	short m2;
	int t;
};
int main()
{
	short n=0;
	scanf("%hd",&n);
	short i=0,j=0,k=0;
	struct student stu[n],kk;
	for(i=0;i<n;i++)
	{
		scanf("%hd %hd:%hd %hd:%hd",&stu[i].id,&stu[i].h1,\
		&stu[i].m1,&stu[i].h2,&stu[i].m2);
		stu[i].t=(stu[i].h2-stu[i].h1)*60+(stu[i].m2-stu[i].m1);
		for(j=0;j<i;j++)
		{
			if(stu[i].id==stu[j].id)
			{
				stu[i].id=0;
				stu[j].t+=stu[i].t;
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		k=i;
		for(j=i;j<n;j++)
		{
			if(stu[j].id!=0)
			{
				if(stu[j].t>stu[k].t||stu[j].t==stu[k].t\
				&&stu[j].id<stu[k].id)
				{
					k=j;
				}
			}
		}
		if(k!=i)
		{
			kk=stu[k];  stu[k]=stu[i];  stu[i]=kk;
		}
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].id!=0)
		{
			printf("%hd %hd\n",stu[i].id,stu[i].t);
		}
	}
	return 0;
 } 
