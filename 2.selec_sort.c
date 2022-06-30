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

void selectsort(int *arr, int num)
{
	int i, j, min ;
	for (i = 0; i < num - 1; ++i ) {//外层比较的次数
		min = i;	//假设索引为i的元素最小
		for (j = i + 1; j < num; ++j)
			if (arr[j] < arr[min])
				min = j;
		if (min != i)
			swap(&arr[min], &arr[i]);
	}
}
int main(int argc, char **argv)
{   
	int arr[10] = {9, 5, 7 , 6, 4, 8, 1, 3 ,2,0};
	selectsort(arr, 10);
	printarr(arr, 10);
    return 0;
}
