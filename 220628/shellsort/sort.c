#include "sort.h"
#include "wrap.h"
void sort(int *arr, int len)
{
	int i = 0;
	int gap = len/2;//规定步进
	for (;gap > 0;gap/=2) {
		for (int i = gap; i<len; i++) {
			int cur = i;
			while (cur - gap >= 0 && arr[cur] < arr[cur - gap]) {
				swap(&arr[cur],&arr[cur - gap]);
				cur = cur - gap;
			} 
		}
	}
}

