#include <stdio.h>

long long d[201][201];


int main()
{
	int sum;
	int n,k;
	scanf("%d%d", &n, &k);
	for(int i=0; i<=n; i++)
	d[1][i] = 1;
	
	for(int j=2; j<=k ;j++)
	{
		for(int m=0; m<=n ;m++)
		{
	for(int l=0; l<=m ;l++)
	d[j][m] += d[j-1][m-l];
	d[j][m] %= 1000000000;
	}
	}
	printf("%lld\n", d[k][n] % 1000000000);
	return 0;
}
