//program to print the diagonal elements and also sum of them IN A MATRIX//
#include<stdio.h>
int main()
{
	int array1[10][10],i,j,m,n,sum = 0;
	printf("Enter no. of rows :");
	scanf("%d", &m);
	printf("\nEnter no. of cols :");
	scanf("%d",&n);
	printf("\nEnter values to the matrix :\n");
 	for (i = 0; i< m; i++)
 {
 	for (j = 0; j < n; j++)
 {
	printf("\nEnter a[%d][%d] value :",i,j);
	scanf("%d", &array1[i][j]);
 }
 }
	printf("\nThe Diagonals elements of a matrix are :\n");
 	if(m==n)
 {
 	for(i=0;i<m;i++)
 {
 	for(j=0;j<n;j++)
 {
 	if	(i==j)
 {
	printf("%d", array1[i][j]); 
	sum+=array1[i][j];
 } 
 }
	printf("\n"); 
 }
	printf("Sum of diagonal elements: %d",sum);
 }
 	else
 {
	printf("\nMatrix is not a Square Matrix.");
}
 return 0;
}
