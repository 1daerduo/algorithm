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

void shellSort(int arr[], int num)
{
	#if 1
	int i, j, gap, temp;
	for (gap = (num >> 1); gap > 0; gap = (gap >>= 1)) {
		for (i = gap; i < num; i++) {
			temp = arr[i];	
			for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
				arr[j + gap] = arr[j];
			arr[j + gap] = temp;
		}
	}
	#else
   int gap, i, j, temp;
    for (gap = num >> 1; gap > 0; gap = gap >>= 1)
        for (i = gap; i < num; i++) {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap){
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = temp;
        }
	#endif
}
int main(int argc, char **argv)
{   
	int arr[10] = {9, 5, 7, 6, 4, 8, 1, 3 ,2,0};
	shellSort(arr, 10);
	printarr(arr, 10);
    return 0;
}
