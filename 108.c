#include<stdio.h>
#include<string.h>
#include<math.h>
short isprime(int x)
{
	short flag=0;
	int i=0;
	if(x%2==0)
	{
		return 0;
	}
	else
	{
		flag=1;
		for(i=3;i<=sqrt(x);i+=2)
		{
			if(x%i==0)
			{
				flag=0;
				break;
			}
		}
	}
	return flag;
} 
int main()
{
	unsigned int n=0,result=0,t=0;
	char s[101]={'\0'};
	short i=0;
	gets(s);
	short N=strlen(s);
	for(i=0;i<N;i++)
	{
		if(isdigit(s[i]))
		{
			n*=10;
			n+=(s[i]-'0');
		}
	}
	if(n==0||n==1||n==2)
	{
		result=n;
	}
	else if(n%2==1&&isprime(n))
	{
		result=n;
	}
	else
	{
		for(i=2,result=0;i<=sqrt(n);i++)
		{
			t=n/i;
			if(n%i==0&&result<t)
			{
				result=t;
			}
			else if(result>t)
			{
				break;
			}
		}
	}
	printf("%d",result);
	return 0;
}
