#include<stdio.h>
struct student
{
	long num;
	char *name;
	char sex;
	float score;
 } stu[3]=
 {
 	{101,"Li",'M',90},
 	{102,"Wang",'M',85},
 	{103,"Liu",'F',78},
 };
 int main()
 {
 	struct student *ps=stu;
 	for(;ps<stu+3;ps++)
 	{
 		printf("%d\t%s\t\t%c\t%f\t\n",ps->num,ps->name,ps->sex,ps->score);
	 }
	return 0;
 }
