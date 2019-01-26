#include <stdio.h>

int main(){
	int t, m;
	scanf("%d", &t);
	int i = t;
	int sum = 0;
	while(t--)
	{
		scanf("%d", &m);
		if(m % 10 == 0 || m % 10 == 6)
		{
			m = m - (m % 10) +9;
		}
		if(m / 10 == 0 || m / 10 == 6)
		{
			if(m >= 10)
			m = m - (m / 10)*10 + 90;
		}
		if(m>100)
		{
			m = 100;
		}
		printf("%d ", m);
		sum = sum + m;
	}
	if( float(sum)/i - sum/i >= 0.5)
	{
		sum = sum/i +1;
	}
	else
	{
		sum = sum/i;
	}
	printf("%d\n", sum);
	return 0;
}
