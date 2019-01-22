#include <stdio.h>

int gcd(int x, int y) {
	if(y == 0)
	{
		return x;
	}
	else
	{
		return gcd(y, x%y);
	}
}

int main(){
	int a, b;
	scanf("%d %d",&a, &b);
	int g = gcd(a,b);
	printf("%d\n", g);
	printf("%d\n", a*b/g);
	return 0;
}
