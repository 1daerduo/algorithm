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
void insertsort(int * arr, int num)
{
	int i, j, temp;
	for (i = 1; i < num; ++i ) {//记录剩余无序
		temp = arr[i];
		for (j = i; j > 0 && arr[j - 1] > temp; --j){
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
			
	}
}/*
{
	int i,j, tmp;
	for (i = 1; i < num; ++i) {
		tmp=arr[i];
		for (j = i; j > 0 && arr[j-1] > tmp; --j) {
			arr[j]=arr[j-1];
		}
		arr[j]=tmp;
	}
}*/
int main(int argc, char **argv)
{   
	int arr[10] = {9, 5, 7, 6, 4, 8, 1, 3 ,2, 0};
	printf("size: %ld\n",sizeof(arr)/sizeof(int));
	insertsort(arr, 10);
	printarr(arr, 10);
    return 0;
}
