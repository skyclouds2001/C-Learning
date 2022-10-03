#include<stdio.h>

int main()
{
    char str[101]={0};
    int i,sum;
    gets(str);
    i=sum=0;
    while(str[i]!=0)  sum+=str[i++];
    printf("%d",sum&(0x0FF));
    return 0;
}
