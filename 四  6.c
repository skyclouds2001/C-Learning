#include<stdio.h>
#include<string.h>
struct STU{
	char id[15];
	int month;
	int day;
};
int main()
{
	int n;	
	short i=0,j=0;
	scanf("%d",&n);
	struct STU stu[n],t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<15;j++)  stu[i].id[j]='\0';
		scanf("%s %d%d",stu[i].id,&stu[i].month,&stu[i].day);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(stu[j].month>stu[j+1].month||stu[j].month==stu[j+1].month\
			&&stu[j].day>stu[j+1].day)
			{
				t=stu[j];	stu[j]=stu[j+1];	stu[j+1]=t; 
			}
		}
	}	
	for(i=0,j=0;i<n;i++)
	{
		if(stu[i].month==stu[i+1].month&&stu[i].day==stu[i+1].day)
		{
			printf("%d %d",stu[i].month,stu[i].day);
			printf(" %s %s",stu[i].id,stu[i+1].id);
			for(j=i+2;stu[i].month==stu[j].month&&stu[i].day==stu[j].day;j++)
				printf(" %s",stu[j].id);
			printf("\n");
			i=j-1;
		}				
	}
	return 0;
}
