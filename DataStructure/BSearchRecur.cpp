#include <stdio.h>

int BSearchRecur(int arr[], int first, int last, int aim)
{
	int mid;
	if(first > last)
		return -1;
	mid = (first+last) / 2;
	if(arr[mid] == aim)
		return mid;
	else if(aim < arr[mid])
		return BSearchRecur(arr , first, mid-1, aim);
	else
		return BSearchRecur(arr , mid+1, last, aim);
}

int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};
	int idx;
	idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
	if(idx == -1)
		printf("Å½»ö ½ÇÆĞ \n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n", idx);
	
	idx =  BSearchRecur(arr, 0, sizeof(arr)/sizeof(int)-1, 4);
	if(idx == -1)
		printf("Å½»ö ½ÇÆĞ \n");
	else
		printf("Å¸°Ù ÀúÀå ÀÎµ¦½º: %d \n");
	return 0;
}
