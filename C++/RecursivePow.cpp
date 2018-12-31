#include <stdio.h>

int recursive (int a)
{
	if(a == 1)
		return 2;
	else
		return recursive(a - 1) * 2;
	
}

int main (void)
{
	int num = 0;
	printf("정수 입력: ");
	scanf("%d", &num);
	printf("2의 8승은 %d", recursive(8));
	return 0;
}
