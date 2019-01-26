#include <stdio.h>

int a[1000000] = {0,};

int main()
{
	int t, k;
	scanf("%d", &t);
	for(int i=0; i<t ;i++)
	{
		scanf("%d", &k);
		if(k <= 1000000)
		a[k-1] = 1;
	}
	for(int i=0; i<1000000 ;i++)
	{
		if(a[i] == 0)
		{
			printf("%d\n", i+1);
			break;
		}
	}
	return 0;
}
