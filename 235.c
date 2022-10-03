#include<stdio.h>
int main()
{
	char *m1="January",*m2="February",*m3="March",*m4="April",*m5="May",*m6="June";
	char *m7="July",*m8="August",*m9="September",*m10="October",*m11="November",*m12="December";
	char *month[12]={m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12};
	short m=0;
	scanf("%hd",&m);
	if(m>=1&&m<=12)  printf("%s",month[m-1]);
	else  printf("wrong");
	return 0;
}
