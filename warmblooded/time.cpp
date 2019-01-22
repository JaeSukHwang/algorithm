#include <stdio.h>

int main (void)
{
	int time, hour, min, sec;
	printf("input second: ");
	scanf("%d", &time);
	hour = time / 3600;
	min = (time - 3600*hour)/60;
	sec = (time - 3600*hour - 60*min);
	printf("[h:%d, m:%d, s:%d]", hour, min, sec);
		
	return 0;
}
