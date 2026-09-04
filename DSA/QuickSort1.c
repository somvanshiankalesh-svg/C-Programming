#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start + 1;

    for (int j = start + 1; j <= end; j++)
    {
        if (arr[j] < pivot)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    swap(&arr[start], &arr[i - 1]);

    return i - 1;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(arr, start, end);

        quickSort(arr, start, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, end);
    }
}

int main()
{
    int arr[] = {35, 10, 50, 20, 40, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("\nSorted Array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}