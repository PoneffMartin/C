/* 
You are given two matrices and you have to output a new matrix which is their sum. The sum of matrices is calculated by
adding each of the members from the first matrix with each of the members of the second one and producing a number
which is a member of a new matrix and is stationed in the same row and col. Write a program to calculate the sum of
two matrices. On the first 2 lines, you are given the dimensions of the two matrices (In order for them to be added
together, they must be of the same dimensions). The first line represents the rows of the matrices and the second one –
the columns. On the next input lines, you are given the members of the matrices.
 */

#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    printf("Enter size of matrices: ");
    scanf("%d %d", &rows, &cols);
    int matrixA[rows][cols], matrixB[rows][cols], sumMatrix[rows][cols];
    printf("Enter members of matrixA: ");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Enter members of matrixB: ");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            sumMatrix[i][j]=matrixA[i][j]+matrixB[i][j];
        }
    }
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

