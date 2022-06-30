#include <stdio.h>
#include "wrap.h"

sort_handler *Mysort = NULL;

void printf_arr(int *arr, int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void RegisterSort(sort_handler *handler)
{
	Mysort = handler;
}
int HaveSortHandler(void)
{
	if (Mysort != NULL)
		return 1;
	return 0;
}

void SORT(int *arr, int len)
{
	if (Mysort == NULL)
		return;
	Mysort(arr, len);
}