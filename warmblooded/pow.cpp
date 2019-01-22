#include <stdio.h>

int main (void)
{
	int n, k;
	int pow = 1;
	printf("input n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		pow = 2 * pow;
		if(pow > n)
		{
			k = i;
			break;
		}
	}
	printf("the maximum value of k satisfies the formula is %d", k);
	return 0;
}
