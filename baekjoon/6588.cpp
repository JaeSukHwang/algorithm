#include<stdio.h>

bool is_prime(int n)
{
	if(n<2)
	return false;
	else
	{
		for(int i=2; i*i<n ;i++)
		{
		if(n%i==0)
		return false;
		}
	}
	return true;
}

int main()
{
	int n =1;
	int c;
	while(n!=0)
	{
		scanf("%d", &n);
		for(int i=2; i<=n/2;i++)
			{
			if(is_prime(i))
			c = n - i;
			if(is_prime(c))
			{
			printf("%d = %d + %d\n",n,i,c);
			break;
		}
		}
	}
	return 0;
}
