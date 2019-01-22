#include <stdio.h>

int gcd(int x, int y){
	if(y == 0)
	{
		return x;
	}
	else
	{
		return gcd(y, x%y);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--) {
		int a[100];
		int n;
		scanf("%d", &n);
		for(int i=0; i<n; i++) {
			scanf("%d", &a[i]);
		}
		long long sum = 0;
		for(int i=0; i<n-1; i++) {
			for (int j=i+1; j<n; j++) {
				sum = sum + gcd(a[i], a[j]);
			}
		}
		printf("%lld\n", sum);
	}
	return 0;
}
