#include <stdio.h>
int a[1001];
int d[1001];

int max(int a, int b)
{
	return a>b?a:b;
}

int main(){
	int mx;
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t;i++)
	{
		scanf("%d", &a[i]);
	}
	mx=0;
	for(int k=1; k<=t; k++) {
		d[k] = 1;
	for(int j=1; j<k; j++) {
		if(a[j] < a[k] && d[k] < d[j]+1)
			d[k] = d[j] + 1;
		}
		mx = max(mx, d[k]);
	}	
	return 0;
}
