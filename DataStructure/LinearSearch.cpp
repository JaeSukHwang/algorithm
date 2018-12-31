#include <stdio.h>
//Linear Search

int LSearch(int in[], int len, int aim)
{
	int i;
	for(i=0; i<len; i++)
	{
		if(in[i] == aim)
			return i;
	}
	return -1;
}

int main (void)
{
	int arr[] = {3, 5, 2, 4, 9};
	int idx;
	
	idx = LSearch(arr, sizeof(arr)/sizeof(int), 4);
	if(idx == -1)
		printf("Ž�� ����\n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);
		
	idx = LSearch(arr, sizeof(arr)/sizeof(int), 7);
	if(idx == -1)
		printf("Ž�� ����\n");
	else
		printf("Ÿ�� ���� �ε���: %d \n", idx);
	return 0;
}
