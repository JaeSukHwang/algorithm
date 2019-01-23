#include <stdio.h>

int max(int a, int b)
{
	return a > b? a : b;
}
int d[10001][3];
int a[10001];
int c;

int main() 
{
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++)
	{
		scanf("%d", &c);
		a[i] = c;
	}	
	d[1][0] = 0;
	d[1][1] = a[1];
	d[1][2] = 0;
	
 	for(int i=2; i<=t; i++)
	{
		d[i][0] = max(d[i-1][0],max(d[i-1][1], d[i-1][2]));
		d[i][1] = d[i-1][0] + a[i];
		d[i][2] = d[i-1][1] + a[i];
	}
	long long ans= 0;
	ans = max(d[t][0],max(d[t][1], d[t][2]));
	printf("%lld\n", ans);
	return 0;
}
