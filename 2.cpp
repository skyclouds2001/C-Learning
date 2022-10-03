#include<stdio.h>

int main(int argc, char const *argv[])
{
	int x = 0, y = 0;
	scanf("%d", &x);

	if(x >=0 && x < 10)
		y = x;
	else if(x >= 10 && x < 20)
		y = x * x + 1;
	else if(x >=20 && x < 30)
		y = x * x * x + x * x + 1;

	printf("%d\n", y);

	return 0;
}
