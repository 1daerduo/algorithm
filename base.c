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
int main(int argc, char **argv)
{   
	int arr[10] = {9, 5, 7 , 6, 4, 8, 1, 3 ,2,0};
    return 0;
}
