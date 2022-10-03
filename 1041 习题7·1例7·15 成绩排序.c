#include<stdio.h>
typedef struct student
{
	long num;
	char name;
	short score[3];
	float averscore;
 } STUDENT;
 int main()
 {
 	short n=0;
 	printf("Please input the number of students:");
 	scanf("%hd",&n);
	STUDENT s[n];
	short a[n],b[n];
	short i,j,t;
 	for(i=0;i<n;i++)
 	{
 		printf("Please input all information of one student:");
		scanf("%ld",&s[i].num);
		scanf("%s",&s[i].name);
		scanf("%hd",&s[i].score[0]);
		scanf("%hd",&s[i].score[1]);
		scanf("%hd",&s[i].score[2]);
		s[i].averscore=((float)s[i].score[0]+(float)s[i].score[1]+(float)s[i].score[2])/3.0;
		printf("\n");
		a[i]=s[i].averscore;
		b[i]=i;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		t=b[i];
		printf("%ld %s %hd %hd %hd %f",s[t].num,s[t].name,s[t].score[0],s[t].score[1],s[t].score[2],s[t].averscore);
		printf("\n");
	}
	return 0;
 }
