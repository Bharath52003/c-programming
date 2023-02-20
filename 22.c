//MULTIPLICATION OF THE MATRIX//
#include<stdio.h>
int main(void)
{
  int c, d, p, q, m, n, k, tot = 0;
  int fst[10][10], sec[10][10], mul[10][10];

  printf(" Please insert size of the first matrix\n : ");
  scanf("%d%d", &m, &n);

  printf("enter the first matrix elements : \n ");
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &fst[c][d]);
 
  printf(" Please insert the size of the second matrix :\n");
  scanf(" %d %d", &p, &q);

  if (n != p)
    printf(" Your given matrices cannot be multiplied with each other. \n ");
  else
  {
    printf("enter the elements of the second matrix : \n ");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &sec[c][d] );

    for (c = 0; c < m; c++)
	 {
      for (d = 0; d < q; d++) 
	  {
        for (k = 0; k < p; k++)
		 {
          tot = tot + fst[c][k] * sec[k][d];
        }
        mul[c][d] = tot;
        tot = 0;
      }
    }
    printf("matrix multiplication = \n "); 
    for (c = 0; c < m; c++)
	 {
      for (d = 0; d < q; d++)
        printf("%d \t", mul[c][d] );
      printf(" \n ");
    }
  }
  return 0;
}
