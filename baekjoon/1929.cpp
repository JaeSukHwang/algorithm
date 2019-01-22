#include <stdio.h>
bool is_prime(int n)
{
	if(n < 2)
	return false;
	else
	{
		for(int i=2; i*i<=n; i++)
		{
			if(n%i==0)
			return false;
		}
	}
	return true;
}


int main()
{
	bool num[1000001]= {false};
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=n; i<=m;i++)
	{
		if(is_prime(i))
		printf("%d\n", i);
	}
	return 0;
}
