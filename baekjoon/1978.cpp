#include <stdio.h>

bool is_prime(int x) {
	if(x < 2) {
		return false;
	}
	for (int i=2; i*i <= x; i++) {
		if(x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	scanf("%d", &n);
	
	int cnt = 0;
	for(int i=0; i<n; i++) {
		int num;
		scanf("%d", &num);
		if(is_prime(num)) {
			cnt = cnt + 1;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
