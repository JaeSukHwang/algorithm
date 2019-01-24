#include <stdio.h>
long long d[101];
int main()
{
	int t;
	for (int i=1; i<=3 ;i++)
	d[i] = 1;
	
	scanf("%d", &t);
	while(t--)
	{
		int a;
		scanf("%d", &a);
		for(int i=4; i<=a; i++)
		{
			d[i] = d[i-2] + d[i-3];
		}
		printf("%lld\n", d[a]);
	}
	return 0;
}
