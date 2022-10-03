#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	double v = 1.0 / (0.05 + 15.0 / 300.0);
	double s = 300.0 * (log(15.0 + 15.0) - log(15.0));

	printf("%lf %lf\n", v, s);

	return 0;
}
