#include<stdio.h>
int slen(char *p)
{
	char *q=p;
	while(*q) q++;
	return q-p;
}
int scmp(char *p,char *q)
{
	while(*p&&*q&&*p++==*q++);
	if(p[-1]=='\0'&&q[-1]=='\0') return 0;
	else if(p[-1]>q[-1]) return 1;
	else if(p[-1]<q[-1]) return -1;
}
char *scpy(char *p,char *q)
{
	char *s=p;
	while(*q) *p++=*q++;
	*p==*q;
	return s;
}
char* scat(char *p,char *q)
{
	char *s=p;
	while(*p) p++;
	while(*q) *p++=*q++;
	*p=*q;
	return s;
}
/*int schr
int sstr*/
int main()
{
	char a[3][20]={"awsssdxd","ssxdaa"};
	printf("%d %d\n",slen(a[0]),slen(a[1]));
	printf("%d\n",scmp(a[0],a[1]));
	printf("%s\n",scpy(a[2],a[0]));
	printf("%s\n",scat(a[2],a[1]));
	
	return 0;
 } 
