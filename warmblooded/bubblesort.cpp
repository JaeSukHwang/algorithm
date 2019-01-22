#include <stdio.h>

void BubbleSort(int arr[], int len)
{
	int j=0;
	int temp = 0;
	for(j=len-1; j>0; j--)
		for(int i=0; i<j; i++)
			if(arr[i]>arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
		 	}
		 	
	for(int k=0;k<len;k++)
	printf("%d ", arr[k]);
}


int main (void)
{
	int length;
	int arr[]={3,2,4,1};
	length = sizeof(arr)/sizeof(int);
	BubbleSort(arr, length);
	return 0;
}
