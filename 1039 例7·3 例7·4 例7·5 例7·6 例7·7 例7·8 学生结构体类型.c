#include<stdio.h>
struct
{
	long num;
	char name[5];
	char sex;
	unsigned short age;
	float score_GS;
	float score_C;
}std[5]=
{
    {9000000,"xixi",'M',18,95,90},
	{9000001,"xixa",'F',18,84,76},
	{9000002,"xaxi",'M',17,55,45},
	{9000003,"xaxa",'F',19,57,84},  		
};
int main()
{
	std[4].num=9000004;
	std[4].name[0]='x';
	std[4].name[1]='a';
	std[4].name[2]='x';
	std[4].name[3]='a';
	std[4].name[4]=0;
	std[4].sex='M';
	std[4].age=19;
	std[4].score_GS=76;
	std[4].score_C=89;
	short sum1=0,sum2=0;
	float average1=0,average2=0;
	short i;
	for(i=0;i<5;i++)
	{
		sum1+=std[i].score_GS;
		sum2+=std[i].score_C;
	}
	average1=(float)sum1/5.0;
	average2=(float)sum2/5.0;
	printf("sum1=%hd sum2=%hd \n average1=%f average2=%f",sum1,sum2,average1,average2);
	return 0;
 } 
 
/* 
struct student_t{
    char num[10];
    char name[20];
    double score;
}st1,st2;

struct student_t{
    char num[10];
    char name[20];
    double score;
}
struct st1,st2;

typedef struct student_t{
    char num[10];
    char name[20];
    double score;
}STUDENT;
STDUENT st1,st2;

typedef struct date
{
	int year;
	int month;
	int day;
}DATE;
typedef struct student_t
{
    char num[10];
    char name[20];
    char sex;
    short age;
    DATE birthday;
    float score;
}STUDENT;
STUDENT stu[10];
STUDENT monitor={"03123222","liming",'M',18,{2001,6,23},84.5};
DATE today={2020,11,19};
DATE date=today;
monitor.birthday.year=2000;
monitor.birthday.month=5;
monitor.birthday.day=22;
*/
