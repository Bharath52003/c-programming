#include <stdio.h>

int main()
{
    int arr[10] = {2, 3, 4, 1, 7, 9, 8, 6, 5, 0}; // Example array
    int n = 10; // Number of elements in the array
    int element, position = -1; // The element to search and its position (initially set to -1)

    printf("Enter the element to search: ");
    scanf("%d", &element);

    // Linear search algorithm
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            position = i;
            break; // Exit the loop once the element is found
        }
    }

    if (position == -1)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Element found at position %d.\n", position);
    }

    return 0;
}
