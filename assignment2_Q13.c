#include <stdio.h>
void rotate(int arr[], int n)
{
    int last_el = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last_el;
}
int main()
{
    /*Given an array, the task is to cyclically rotate the array clockwise by one time.
    Examples:
    Input: arr[] = {1, 2, 3, 4, 5}
    Output: arr[] = {5, 1, 2, 3, 4}*/
    int arr[] = { 1, 2, 3, 4, 5 }, i;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    rotate(arr, n);
    printf("\nRotated array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
