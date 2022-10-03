#include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[])
{
	double I = log(6.0 / 5.0);

	for(int i = 1; i <= 20; ++i) {
		I = (-5.0) * I + 1.0 / i;
		printf("%lf\n", I);
	}

	return 0;
}