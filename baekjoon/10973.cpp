#include <stdio.h>

int a[10000];

void swap(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


void before_permutation(int a[],int n)
{
	int i = n-1;
	while(i>=0 && a[i-1] <= a[i])	i--;
	if(i <= 0)
	{
		printf("%d\n", -1);
		return;
	}
	int j = n-1;
	while(a[i-1] <= a[j])	j--;
	swap(&a[i-1], &a[j]);
	j = n-1;
	while(i<j)
	{
		swap(&a[i],&a[j]);
		j--;
		i++;
	}
	for(int i=0; i<n; i++)
	printf("%d ", a[i]);
	return;
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	scanf("%d", &a[i]);
	before_permutation(a, t);
	return 0;
}
