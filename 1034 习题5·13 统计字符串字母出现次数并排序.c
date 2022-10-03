#include<stdio.h>
int main()
{
	char ss[10000]={0},p[26]={0};
	int count[26]={0};    //0~25 A~Z a~z
	short n=0;
	short i=0,j=0,k=0;
	char t;
	for(i=0;i<26;i++)    //初始化 
	{
		p[i]='a'+i;
	}
	for(i=0;;i++)    //读取 
	{
		ss[i]=getchar();
		if(ss[i]=='\n')
		{
			ss[i]='\0';
			break;
		}
	}
	n=i;
	for(i=0;i<n;i++)    //计数 
	{
		if(ss[i]>='a'&&ss[i]<='z')
		{
			t=ss[i]-'a';
			count[t]++;
		}
		else if(ss[i]>='A'&&ss[i]<='Z')
		{
			t=ss[i]-'A';
			count[t]++;
		}
	}
	for(i=0;i<26;i++)    //排序 
	{
		for(j=0;j<25-i;j++)
		{
			if(count[j]>count[j+1])
			{
				t=p[j];  k=count[j];
				p[j]=p[j+1];  count[j]=count[j+1];
				p[j+1]=t;  count[j+1]=k;
			}
		}
	}
	for(i=0;i<26;i++)    //输出 
	{
		if(count[i]!=0)
		{
			printf("%c ",p[i]);
		}		
	}
	return 0;
 } 
