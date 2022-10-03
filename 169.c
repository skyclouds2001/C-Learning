#include<stdio.h>
typedef struct{
	short y;
	short m;
	short d;
	int size;
}file;
int main()
{
	short n=0;
	scanf("%hd",&n);
	file f[n],*fp[n+1];
	short i=0,j=0;
	for(i=0;i<n;i++)
	{
		scanf("%hd/%hd/%hd %d",&f[i].y,&f[i].m,&f[i].d,&f[i].size);
		fp[i]=f+i;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(fp[j]->y<fp[j+1]->y||fp[j]->y==fp[j+1]->y&&fp[j]->m<fp[j+1]->m||\
			fp[j]->y==fp[j+1]->y&&fp[j]->m==fp[j+1]->m&&fp[j]->d<fp[j+1]->d||\
			fp[j]->y==fp[j+1]->y&&fp[j]->m==fp[j+1]->m&&fp[j]->d==fp[j+1]->d&&\
			fp[j]->size<fp[j+1]->size)
			{
				fp[n]=fp[j];  fp[j]=fp[j+1];  fp[j+1]=fp[n];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%hd/%hd/%hd %d\n",fp[i]->y,fp[i]->m,fp[i]->d,fp[i]->size);
	}
	return 0;
}
