#include<stdio.h>

int main(int argc, char const *argv[])
{
	double sum = 0, s = 0;
	int i = 0;

	i = 1;
	s = 1;
	sum = 0;
	while(s >= 0.001) {
		sum += s;
		s = 1.0 / i / (i + 1);
		++i;
	}

	printf("%lf\n", sum);

	return 0;
}