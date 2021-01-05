#include <stdio.h>
#include "isort.h"
#include "isort.c"

#define SIZE 50
int main() {
    int arr[SIZE];
    int i = 0;
    for (i = 0; i < SIZE; i++)
    {
        printf("Insert the %d number: ", (i + 1));
        int num;

        scanf("%d \n", &num);
        *(arr + i) = num;
    }
    printarrshadi(arr, SIZE);
    insertion_sort(arr, SIZE);
    printarrshadi(arr, SIZE);
    return 0;
}