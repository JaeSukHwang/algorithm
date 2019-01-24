#include <stdio.h>
#include <math.h>
int d[100001];

int main(){
	int t, j;
	scanf("%d", &t);
	for(int i=1; i<=t ;i++)
	{
		d[i] = i;
	}
	
	for(int i=2; i<=t ;i++)
	{
		for(j=1; j*j<=i; j++)
		{
			if(d[i] > d[i-j*j]+1)
				d[i] = d[i-j*j] + 1;
		}
	}
	printf("%d\n", d[t]);
	return 0;
}
