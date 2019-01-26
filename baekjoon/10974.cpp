#include <stdio.h>

int a[8];
int k;

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void next_permutation(int *a, int n){
	int i = n-1;
	while(i>0 && a[i-1]>a[i]) i -= 1;
	if(i<=0)
	{
		k=1;
		return;
	}
	int j = n-1;
	while(a[i-1] >= a[j]) j -= 1;
	swap(&a[i-1], &a[j]);
	j = n-1;
	while(i<j)
	{
		swap(&a[i],&a[j]);
		i += 1;
		j -= 1;
	}
	for(int i=0; i<n; i++)
	printf("%d ", a[i]+1);
	printf("\n");
	return;
}


int main()
{
	int t;
	scanf("%d", &t);
	for(int i=0; i<t ;i++)
	{
		a[i] = i;
		printf("%d ", a[i]+1);
	}
	printf("\n");
	while(k==0)
		next_permutation(a, t);
	return 0;
}
