#include "sort.h"
#include "wrap.h"

void sort(int *arr, int len)
{
	int cur;
	for (int i = 1; i < len; i++) {
		cur = i;
		for (int j = i-1; j >= 0; j--) {
			if (arr[j] > arr[cur]) {
				swap(&arr[j], &arr[cur]);
				cur = j;
			}
		}
	}

}


