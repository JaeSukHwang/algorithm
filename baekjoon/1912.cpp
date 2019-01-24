#include <stdio.h>

int max(int a, int b)
{
	return a>b?a:b;
}

int a[100001];
int d[100001];

int main()
{
	int t;
	int mx;
	scanf("%d", &t);
	for (int i=1; i<=t; i++)
	{
		scanf("%d", &a[i]);	
	}
	d[1] = a[1];
	mx = a[1];
	for(int i=2; i<=t; i++)
	{
		d[i] = max(d[i-1]+a[i], a[i]);
		mx = max(mx, d[i]);
	}
	printf("%d\n", mx);
	return 0;
}
