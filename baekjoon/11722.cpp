#include <stdio.h>

int a[1001];
int d[1001];

int main()
{
	int mx = 0;
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t ;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(int i=1; i<=t ;i++)
	{
		d[i] = 1;
		for(int j=1; j<i; j++)
		{
			if(a[j]> a[i] && d[i] < d[j]+1)
			d[i] = d[j]+1;
		}
		if(mx<d[i])
		mx = d[i];
	}
	printf("%d\n", mx);
	return 0;
}
