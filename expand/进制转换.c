#include<stdio.h>
int main()
{
	short B[8]={0};
	short i=0;
	short p=0,n=0,t=0;
	scanf("%hd",&n);
	t=n;
	for(i=0,p=0;i<8;i++)
	{
		B[i]=t%2;
		t/=2;
		if(t==0) break;
		p++;
	}
	for(i=p;i>=0;i--)
	{
		printf("%hd",B[i]);
	}
	printf("\n");
	printf("%o \n%X",n,n);
	return 0;
 }
/* 
int main()
{
	short B[8]={0},O[3]={0};
	char H[2]={0};
	short i=0;
	short p=0,n=0,t=0;
	scanf("%hd",&n);
	t=n;
	for(i=0,p=0;i<8;i++)
	{
		B[i]=t%2;
		t/=2;
		if(t==0) break;
		p++;
	}
	O[0]=B[0]+B[1]*2+B[2]*4;
	O[1]=B[3]+B[4]*2+B[5]*4;
	O[2]=B[6]+B[7]*2;
	H[0]=B[0]+B[1]*2+B[2]*4+B[3]*8;
	H[1]=B[4]+B[5]*2+B[6]*4+B[7]*8;
	for(i=0;i<=p;i++)
	{
		printf("%hd",B[i]);
	}
	printf("\n");
	printf("%hd%hd%hd",O[0],O[1],O[2]);
	return 0;
 }
 */ 
