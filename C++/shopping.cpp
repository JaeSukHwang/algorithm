#include <stdio.h>

int main(void)
{
	int mny;
	int i,j,k;
	printf("���� ����� �����ϰ� �ִ� �ݾ�: ");
	scanf("%d", &mny);
	mny -= 1600;
	for(i=0; i<4 ;i++)
		for(j=0; j<4; j++)
			for(k=0; k<4; k++)
				if(500*i+700*j+400*k==mny)
						printf(("ũ���� %d��, ����� %d��, �ݶ� %d��\n"),i+1,j+1,k+1);
	printf("��� �����Ͻðڽ��ϱ�?");
	return 0;	
}
