#include <stdio.h>
#include <string.h>
#include <math.h>


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectsort(int arr[], int len) 
{
    int min, i, j;
    for (i = 0; i < len - 1; ++i) {
        min = i;
        for (j = i + 1; j < len; j++) {
            if (arr[j] < arr[min])
                min =  j;
        }
        if (min != i)
            swap(&arr[min], &arr[i]);
    }
}

int main(int argc, char **argv)
{   
    int i = 0;
    int arr[10] = {7,8,5,6,9,4,1,3,2,0};
    selectsort(arr, 10);

    for (;i < 10; ++i) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    return 0;
}
