#include "sort.h"

void sort(int *arr, int len)
{
	int temp = 0;
	int min = 0;
	//int k = 0;
	for (int i = 0; i < len - 1 ; i++) {
		min = i;
		for (int j = i+1; j < len; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		if (min != i) {
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}


/* 将最小（大）的数据从无序区中选择（定位）出来，然后将其与第一个无序数交换 */

