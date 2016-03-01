/* 
A multiplication of two matrices is performed by taking each of the rows of the first matrix and taking the dot product of
it and each of the columns in the second matrix. The newly created matrix has dimensions RxC, where R is the number
of rows of the first matrix and C is the number of columns of the second matrix.
Note that a matrix multiplication is valid only if the number of rows of the first matrix is equal to the number of columns
of the second matrix and the number of columns of the first one are equal to the number of rows of the second one.
Example:
| a 1 , a 2 , a 3 |
| a 4 , a 5 , a 6 |
x
| b 1 , b 2 |
| b 4 , b 5 |
| b 7 , b 8 |
| (a 1 *b 1 + a 2 *b 4 + a 3 *b 7 ) ,
= | (a 4 *b 1 + a 5 *b 4 + a 6 *b 7 ) ,
(a 1 *b 2 + a 2 *b 5 + a 3 *b 8 ) |
(a 4 *b 2 + a 5 *b 5 + a 6 *b 8 ) |
On the first two input lines you are given the dimensions of the first matrix. The second matrix has the same dimensions
in inversed order.
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j, k, sum=0;
    printf("Enter size of matrix: ");
    scanf("%d %d", &rows, &cols);
    int matrixA[rows][cols], matrixB[cols][rows], resultMatrix[rows][rows];
    printf("Enter members of matrixA: ");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Enter members of matrixB: ");
    for(i=0; i<cols; i++)
    {
        for(j=0; j<rows; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }
    for(i=0; i<rows; i++)
    {
        for(j=0; j<rows; j++)
        {
            for(k=0; k<cols; k++)
            {
                sum += matrixA[i][k]*matrixB[k][j];
            }
            resultMatrix[i][j]=sum;
            sum=0;
        }
    }
    printf("\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<rows; j++)
        {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

