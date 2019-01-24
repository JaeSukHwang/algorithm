#include <stdio.h>

int d[31];

int main()
{
	int t;
	scanf("%d", &t);
	d[0] =1;
	for(int i=2; i<=t ; i=i+2)
	{
		d[i] = 0;
		for(int j=i; j>0 ;j = j-2)
		d[i] += 2 * d[i-j];
		d[i] += d[i-2];
	}
	printf("%d\n", d[t]);
	
}
