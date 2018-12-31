#include <stdio.h>

void even (int * ar, int len)
{
	int s;
	printf("print even : ");
for(int i=0; i<len ;i++)
	if(ar[i]%2 == 0)
		{
		printf("%d", ar[i]);
		s = i;
		break;
	}
for(int i=s+1; i<len ;i++)
	if(ar[i]%2 == 0)
		printf(", %d", ar[i]);
		printf("\n");		
			return;
}

void odd (int * ar, int len)
{
	int s;
	printf("print odd : ");
for(int i=0; i<len ;i++)
	if(ar[i]%2 == 1)
		{
		printf("%d", ar[i]);
		s = i;
		break;
	}
for(int i=s+1; i<len ;i++)
	if(ar[i]%2 == 1)
		printf(", %d", ar[i]);	
		printf("\n");	
			return;
} 

int main (void)
{
	int arr[10];
	printf("input ten numbers\n");
	for(int i=0; i<10 ;i++)
		{
		printf("input: ");
		scanf("%d", &arr[i]);
		}
	odd(arr, sizeof(arr)/sizeof(int));
	even(arr, sizeof(arr)/sizeof(int));
	return 0;
}
