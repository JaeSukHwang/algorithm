#include <stdio.h>

bool isPrimeNumber (int num)
	{
		int cnt = 0;
		for(int i=1; i<=num; i++)
			{
			if(num%i==0)
			{
				cnt += 1;
				}
			}
	
	if(cnt == 2)
	{
		printf("%d ", num);
		return true;
	}
	else
	{
	return false;
	}
	}


int main (void)
{
	int j=1 , count=0;	
	while(true)
	{
		if(isPrimeNumber(j))
		{
			
		
			count += 1;
		}
		if(count==10)
		break;
	j++;
	}
	return 0;
}
