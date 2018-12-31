#include <stdio.h>

int main(void)
{
	int mny;
	int i,j,k;
	printf("현재 당신이 소유하고 있는 금액: ");
	scanf("%d", &mny);
	mny -= 1600;
	for(i=0; i<4 ;i++)
		for(j=0; j<4; j++)
			for(k=0; k<4; k++)
				if(500*i+700*j+400*k==mny)
						printf(("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n"),i+1,j+1,k+1);
	printf("어떻게 구입하시겠습니까?");
	return 0;	
}
