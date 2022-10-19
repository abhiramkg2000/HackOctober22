/*c program to find transpose of a matrix */
#include <stdio.h>

 
int main()
{
  int p, q, c, d, mat[10][10], tra[10][10];
 
  printf("Enter the number of rows and columns of a matrix\n");
  scanf("%d%d", &p, &q);
  printf("Enter elements of the matrix\n");
 
  for (c = 0; c < p; c++)
    for (d = 0; d < q; d++)
      scanf("%d", &mat[c][d]);
 
  for (c = 0; c < p; c++)
    for (d = 0; d < q; d++)
      tra[d][c] = mat[c][d];
 
  printf("Transpose of the matrix:\n");
 
  for (c = 0; c < q; c++) {
      
    for (d = 0; d < p; d++)
    
      printf("%d\t", tra[c][d]);
      
        printf("\n");
  }

  return 0;
}



