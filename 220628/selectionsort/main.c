#include <stdio.h>
#include "sort.h"
#include "wrap.h"

int 
main(int argc, char *argv[])
{
	int len, i = 0, b_len;
	printf("键入个数，回车键入...\n");
	scanf("%d",&len);
	b_len = len;
	int arr[len];
	printf("键入数字，回车键入...\n");
	while (len--) {
		scanf("%d",&arr[i]);
		i++;
	}
	RegisterSort(sort);
	printf_arr(arr, b_len);
	if (HaveSortHandler())
		SORT(arr, b_len);
	printf_arr(arr, b_len);
	return(1);
}