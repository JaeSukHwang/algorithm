#include <stdio.h>

int memo[100];
int fibonacci1(int n) {
	if (n <= 1) {
		return n;
	} else {
		if(memo[n] > 0) {
			return memo[n];
		}
		memo[n] = fibonacci1(n-1) + fibonacci1(n-2);
		return memo[n];
	}
}

int d[100];
int fibonacci2(int n) {
	d[0] = 0;
	d[1] = 1;
	for (int i=2; i<=n; i++) {
		d[i] = d[i-1] + d[i-2];
	}
	return d[n];
}


int main()
{
printf("%d\n", fibonacci1(6));
printf("%d\n", fibonacci2(6));
return 0;
}
