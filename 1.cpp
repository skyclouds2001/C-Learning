#include<stdio.h>

int main(int argc, char const *argv[])
{
	int T = 0, N = 0;

	for(N = 1; T <= 10000; ++N) {
		T += N * N * N;
	}

	printf("%d\n", T);

	return 0;
}