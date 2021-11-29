#include <stdio.h>

void selection_sort(int arr[], int n);

int main(void)
{
    int i, arr[10];

    printf("Please enter 10 integers: ");

    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    selection_sort(arr, 10);

    printf("Sorted list: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
}

void selection_sort(int arr[], int n)
{
    int i, temp, max_index = 0;

    if (n == 0)
        return;

    for (i = 0; i < n; i++)
    {
        if (arr[max_index] < arr[i])
            max_index = i;
    }

    temp = arr[n - 1];
    arr[n - 1] = arr[max_index];
    arr[max_index] = temp;

    selection_sort(arr, n - 1);
}