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
void MergeArr(int *src, int *tmp, int start, int mid, int end)
{
	int i = start;
	int j = mid + 1;
	int k = start;

	while (i != mid + 1 && j != end + 1) {
		if (src[i] < src[j])
			tmp[k++] = src[i++];
		else 
			tmp[k++] = src[j++];
	}
	if (i == mid + 1) 
	{
		while (j != end + 1)
			tmp[k++] = src[j++];
	} else {
		while (i != mid + 1)
			tmp[k++] = src[i++];
	}

	while (start <= end) {
		src[start] = tmp[start];
		start++;
	}
}
void MergeSort(int* arr, int* tmp, int start, int end)
{
	if (start < end ) {
		int mid = (start + end) / 2;
		MergeSort(arr, tmp, start, mid);
		MergeSort(arr, tmp, mid + 1, end);
		MergeArr(arr, tmp, start, mid, end);
	}
}
int main(int argc, char **argv)
{   
	int arr1[10] = {9,7,5,3,1,10,8,6,4,2};
	int arr2[10] = {0};
	MergeSort(arr1,arr2, 0, 9);
	printarr(arr2, 10);
	return 0;
}
