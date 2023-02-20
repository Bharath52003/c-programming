//sum of the elements in the arry using pointer//
#include <stdio.h>
#include <malloc.h>
int main()
{
	int i, n, sum = 0;
	int *a;
     	printf("Enter the number of elements :\n");
	scanf("%d", &n);
        a = (int *) malloc(n * sizeof(int));
        printf("Enter Elements of the List \n");
	for (i = 0; i < n; i++) 
        {
		scanf("%d", a + i);
	}
        for (i = 0; i < n; i++)
        {
		sum = sum + *(a + i); 
	}
        printf("Sum of all elements in array = %d\n", sum);
        return 0;
}
