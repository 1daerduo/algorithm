#include <stdio.h>


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int arr[], int len)
{
	int i, j;
	for (i = 0; i < len - 1; ++i) {
		for (j = 0; j < len - i -1; ++j) {
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j+1]);
		}
	}
}

int main(int argc, char **argv) 
{
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int i = 0;	
	bubble_sort(arr, 10);
	for (i = 0; i < 10; ++i) {
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	return 0;
}
