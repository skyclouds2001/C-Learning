#include<stdio.h>
#include<string.h>

int main()
{
	short N=0,i=0,j=0;
	scanf("%hd",&N);  getchar();
	char P[N][20];
	for(i=0;i<N;i++)	gets(P[i]);
	short K=0;
	scanf("%hd",&K);
	short com[N];
	for(i=0;i<N;i++)	scanf("%hd",com+i);
	short F[N];
	for(i=0;i<N;i++)	F[i]=i;
	for(i=0;i<N;i++)	com[i]--;
	short ls[N];
	for(i=0;i<K;i++)
	{
		for(j=0;j<N;j++)	ls[com[j]]=F[j];
		for(j=0;j<N;j++)	F[j]=ls[j];
	}	
	for(i=0;i<N;i++)	puts(P[F[i]]);
	return 0; 
}
