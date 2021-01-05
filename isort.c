#include <stdio.h>
#include "isort.h"
void shift_element(int* arr, int i)
{
    int x = *(arr);
    int cur = *(arr + i);
    for (int index = 0; index < i; index++)
    {
        int y = *(arr + index + 1);
        *(arr + index + 1) = x;
        x = y;
    }
    *arr = cur;
}
void insertion_sort(int* arr, int len)
{
    int index;
    for (index = 0; index < len; index++)
    {
        int v;
        int min = *(arr + index);
        int minindex = index;
        for (v = index; v < len; v++)
        {
            if (min > *(arr + v))
            {
                min = *(arr + v);
                minindex = v;
            }
            shift_element((arr + index), minindex - index);
        }
    }
}
void printarrshadi(int* arr, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf(", %ls", (arr + i));
    }
}