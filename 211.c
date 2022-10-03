#include<stdio.h>
int main()
{
	float stu[5][4]={0};
	short i=0,j=0;
	float score=0;
	short fn=0,wn=0;
	float aver(float*);
	short fals(float*);
	short well(float*);
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%f",&stu[i][j]);
		}
	}
	score=aver(&stu[0][0]);
	fn=fals(&stu[0][0]);
	wn=well(&stu[0][0]);
	printf("%.1f %hd %hd",score,fn,wn);
	return 0;
}
float aver(float*p)
{
	short i=0;
	float sum=0;
	for(i=0;i<20;i+=4)  sum+=*(p+i);
	return sum/5;
}
short fals(float*p)
{
	short i=0,j=0;
	short count=0,n=0;
	for(i=0;i<5;i++)
	{
		count=0;
		for(j=0;j<4;j++)
		{
			if(*(p+i*4+j)<60)  count++;
		}
		if(count>=2)  n++;
	}
	return n;
}
short well(float*p)
{
	short i=0,j=0;
	short n=0;
	float sum=0,ave=0;
	_Bool flag=1;
	for(i=0;i<5;i++)
	{
		flag=1;
		sum=0;
		for(j=0;j<4;j++)
		{
			sum+=*(p+i*4+j);
			if(*(p+i*4+j)<=85)  flag=0;
		}
		ave=sum/4;
		if(flag||ave>=90)  n++;
	}
	return n;
}
