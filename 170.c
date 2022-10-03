#include<stdio.h>
typedef struct student{
	char id[21];
	short score;
	short english;
}stu;
int main()
{
	short m=0,n=0;
	scanf("%hd%hd",&m,&n);
	stu s[m],t;
	short i=0,j=0;
	for(i=0;i<m;i++)
	{
		scanf("%s %hd %hd",s[i].id,&s[i].score,&s[i].english);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-i-1;j++)
		{
			if(s[j].score<s[j+1].score||s[j].score==s[j+1].score\
			&&s[j].english<s[j+1].english||s[j].score==s[j+1].score\
			&&s[j].english==s[j+1].english&&s[j].id>s[j+1].id)
			{
				t=s[j];  s[j]=s[j+1];  s[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s %hd %hd\n",s[i].id,s[i].score,s[i].english);
	}	
	return 0;
}
