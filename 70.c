#include <stdio.h>

int kthSmallest(int arr[], int n, int k)
{
    // Sort the array using any sorting algorithm
    // Here, we use selection sort
    for (int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    // Return the kth smallest element
    return arr[k-1];
}

int main()
{
    int arr[] = { 7, 10, 4, 3, 20, 15 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    printf("Kth smallest element is %d", kthSmallest(arr, n, k));
    return 0;
}
