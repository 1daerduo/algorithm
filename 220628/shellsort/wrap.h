#ifndef __WRAP_H
#define __WRAP_H

typedef void sort_handler(int *, int);
void printf_arr(int *arr, int len);
int HaveSortHandler(void);
void RegisterSort(sort_handler *handler);
void SORT(int *arr, int len);
void swap(int *a, int *b);
#endif