#include <stdio.h>
#include <string.h>
#include <math.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printarr(int arr[], int num)
{
	int i = 0;
	printf("\r\n");
	for (;i < num; ++i)
		printf("%d ", arr[i]);
	printf("\r\n");
}
int Onetripsort(int arr[], int low, int high)
{
	//base point
	int point = arr[low];
	while (low < high) {
		while (low < high && arr[high] >= point)
			high--;
		
		swap(&arr[low], &arr[high]);

		while (low < high && point >= arr[low])
			low++;
		
		swap(&arr[low], &arr[high]);
		
	}

	return low;
	
}
void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		int k = Onetripsort(arr, low, high);
		//k 的左序列
		quickSort( arr, low, k - 1 );
		//k 的右序列
		quickSort(arr, k + 1, high);
	}
}

int main(int argc, char **argv)
{   
	int arr[10] = {9, 5, 7 , 6, 4, 8, 1, 3 ,2,0};
	quickSort(arr, 0, 9);
	printarr(arr, 10);
    return 0;
}
