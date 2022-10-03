#include<stdio.h>
   int main()
   {	
       int  a;
	   char c;
       unsigned char c1;
	   a=c=getchar();                 //  ‰»Î£∫1
	   putchar(a);               
	   putchar('\n');
	   putchar(c);
	   putchar(10);
	   printf("a=%d,c=%d\n",a,c);  
	   scanf("%d,%c",&a,&c);         // ‰»Î£∫ 1,1
       putchar(a);
       putchar('\n');
       putchar(c);
       printf("\n");
       printf("a=%d,c=%d\n",a,c); 
       a=c=c1=127;
       a++;
       c++;
       c1++; 
       printf("a=%d,c=%d, c1= %d\n",a,c,c1);         
       return 0; 
  }  
