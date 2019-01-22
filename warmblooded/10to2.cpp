#include <stdio.h>

int main (void)
{
	int num;
	int arr[50];
	int i=0;
	printf("integer input as decimal: ");
	scanf("%d", &num);
	while(num>=1)
	{
	arr[i] = num%2;
	i++;
	num = num / 2;
	}
	
	while(i>=1)
	{
		i--;
		printf("%d", arr[i]);
	}
return 0;
}
