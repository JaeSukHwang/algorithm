#include <stdio.h>

int main (void)
{
	
	int j = 0;
	int k =0 ;
	int arr1[10];
	int arr2[10];
	int num;
	printf("input ten numbers\n");
	for(int i=0; i<10; i++)
	{
	printf("input: ");
	scanf("%d", &num);
	arr1[i] = num;
	}
	
	for(int i=0; i<10; i++)
	{
	if(arr1[i]%2 == 1)
	{
	arr2[j] = arr1[i];
	j++;
	}
}
	for(int i=0; i<10; i++)
	{
	if(arr1[i]%2 == 0)
	{
	arr2[9-k] = arr1[i];
	k++;
	}
}
for(int i =0; i<10; i++)
printf("%d ", arr2[i]);
return 0;
}

