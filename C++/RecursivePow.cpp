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
	printf("input integer : ");
	scanf("%d", &num);
	printf("2 pow %d equals %d",num, recursive(num));
	return 0;
}
