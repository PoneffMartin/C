/* 
You are given a matrix of numbers. Your task is to print out the numbers, one group at a line, which are stationed
beneath the matrix’s main diagonal along with the diagonal itself. On the first input line, you are given the matrix’s rows
and cols count.
 */

#include <stdio.h>

int main()
{

    int rows, cols, n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);
    rows=n;
    cols=n;
    int matrix[rows][cols];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

