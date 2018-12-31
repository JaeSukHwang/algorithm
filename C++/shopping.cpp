#include <stdio.h>

int main(void)
{
	int mny;
	int i,j,k;
	printf("the money that you have : ");
	scanf("%d", &mny);
	mny -= 1600;
	for(i=0; i<4 ;i++)
		for(j=0; j<4; j++)
			for(k=0; k<4; k++)
				if(500*i+700*j+400*k==mny)
						printf(("cream bread %d, shrimp snake %d, cola %d\n"),i+1,j+1,k+1);
	printf("How do you buy it?");
	return 0;	
}
