/*�������
��Ŀ���ݣ�
��ĳ�������һϵ�е���������Ԥ�Ȳ�֪����������������
һ������-1���ͱ�ʾ���������Ȼ�󣬰��պ������෴��˳����������������֣�
����������ʶ������-1��
�����ʽ:
һϵ��������������-1��ʾ������-1������������ݵ�һ���֡�
�����ʽ��
�����������෴��˳��������е�������ÿ�����������һ���ո����������������֣�
������������Ҳ�пո�
����������
1 2 3 4 -1
���������
4 3 2 1 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50
typedef struct{
	int *array;
	int size;
}ARRAY;
ARRAY array_creat(ARRAY a)
{
	a.array=(int*)malloc(SIZE*sizeof(int));
	memset(a.array,-1,SIZE*sizeof(int));
	a.size=SIZE;
	return a;
}
void array_free(ARRAY a)
{
	free(a.array);
	a.array=NULL;
	a.size=0;
}
void array_output(ARRAY a,int n)
{
	int*p=a.array,i=n-1;
	while(i>=0)
	{
		printf("%d\n",p[i]);
		i--;
	}
}
int array_size(ARRAY a)
{
	return a.size;
}
ARRAY array_inflate(ARRAY a,int n)
{
	int *p=(int*)malloc((SIZE+a.size)*sizeof(int)),i=0;
	memset(a.array,-1,(SIZE+a.size)*sizeof(int));
	for(i=0;i<a.size;i++)	*(p+i)=*(a.array+i);
	free(a.array);
	a.array=p;
	a.size+=SIZE;
	return a;
}
int*array_at(ARRAY a,int n)
{
	return a.array+n-1;
}
int main()
{
	ARRAY a={NULL,0};
	int t=0,n=0;
	a=array_creat(a);
	while(t!=-1)
	{
		scanf("%d",&t);
		if(t==-1)	break;
		n++;
		if(n==array_size(a))	a=array_inflate(a,n);
		*(array_at(a,n))=t;
	}
	array_output(a,n);
	array_free(a);
	return 0;
 } 
