#include <stdio.h>

int main (void)
{
	int n, k;
	int pow = 1;
	printf("��� n �Է�: ");
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
	printf("������ �����ϴ� k�� �ִ밪�� %d", k);
	return 0;

}
