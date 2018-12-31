#include <stdio.h>

int main (void)
{
	int n, k;
	int pow = 1;
	printf("상수 n 입력: ");
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
	printf("공식을 만족하는 k의 최대값은 %d", k);
	return 0;

}
