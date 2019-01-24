#include <stdio.h>

int max(int a, int b)
{
	return a > b ? a : b;
}


int d[301][3];
int a[301];
int mx;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t ;i++)
	{
		scanf("%d", &a[i]);
	}
	d[1][1] = a[1];
	d[1][2] = 0;
	d[2][1] = a[2];
	d[2][2] = a[1] + a[2];
	for(int i=3; i<=t ;i++)
	{
		d[i][2] = d[i-1][1] + a[i];
		d[i][1] = max(d[i-2][1] + a[i], d[i-2][2] + a[i]);
	}
	mx = max(d[t][1], d[t][2]);
	printf("%d\n", mx);
	return 0;
}
