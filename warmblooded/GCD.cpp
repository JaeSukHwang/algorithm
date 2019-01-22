#include <stdio.h>

int main (void)
{
	int num1, num2, i, gcd;
	printf("input two integers : ");	
	scanf("%d %d", &num1, &num2);
	if(num1 < num2)
		for(i=1;i<num1+1;i++)
		{
			if(num1%i == 0 and num2%i == 0 )
			gcd = i;
		}
	else
		for(i=1;i<num2+1;i++)
		{
			if(num1%i == 0 and num2%i == 0 )
			gcd = i;
		}
	printf("%d", gcd);
	return 0;
}
