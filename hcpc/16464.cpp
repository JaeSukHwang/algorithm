#include <stdio.h>

int d[30];

int main()
{
	int k;
	int t, j;
	scanf("%d", &t);
	d[0] = 2;
	for(int i=1; i<30 ;i++)
	{
		d[i] = d[i-1]*2;
	}
	while(t--)
	{
		scanf("%d", &j);
		for(int i=0; i<30 ;i++)
		{
		if(d[i] == j)
		k=1;
		}
		if(k==1)
		{
			printf("GoHanGang\n");
		}
		else
		{
			printf("Gazua\n");
		}
		k = 0;
	}
	return 0;
}
