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
	printf("���� �Է�: ");
	scanf("%d", &num);
	printf("2�� 8���� %d", recursive(8));
	return 0;
}
