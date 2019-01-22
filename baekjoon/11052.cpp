#include <stdio.h>

int n;
int p[1001];
int dp[1001];

int returnMax(int a, int b){
	return a > b? a : b;
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &p[i]);
	}
	for(int i=1; i<=n; i++) {
		for(int j=0; j< i; j++) {
			dp[i] = returnMax(dp[i], dp[j]+p[i-j]);
		}
	}
	printf("%d", dp[n]);
	
	return 0;
}
