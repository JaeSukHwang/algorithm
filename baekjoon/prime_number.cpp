#include <stdio.h>

bool prime(int n) {
	if (n < 2) {
		return false;
	}
	for (int i=2; i*i<=n; i++){
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	printf("%d", prime(11));
	return 0;
}
