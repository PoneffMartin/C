/* 
A Scalar Multiplication of vectors is when you have a given vector (ex. [a 1 , a 2 ... a n ] ) and you want to multiply it by a
scalar (a simple number). The multiplication is done by multiplying the scalar with each of the vector members. Write a
program to perform a scalar multiplication of a vector. You are given an input number representing the dimension of a
vector on the first input line. On the second input line, you are given the scalar to multiply the vector and on the next n
lines, you are given the members of the vector.
 */

#include <stdio.h>

int main()
{
    int dimension, scalar;
    printf("Enter the dimension of the vector: ");    
    scanf("%d", &dimension);
    int vector[dimension];
    printf("Enter a scalar to multiply the vector with: ");
    scanf("%d", &scalar);
    printf("Enter the %d members of the vector: ", dimension);
    for(int i=0; i<dimension; i++)
    {
        scanf("%d", &vector[i]);
    }
    for(int i=0; i<dimension; i++)
    {
        printf("%d ", vector[i]*scalar);
    }
    
    return 0;
}

