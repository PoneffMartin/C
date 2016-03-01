/* 
A Dot product of two vectors is a scalar which is a result of the sum of the product of each of the two vectors’ members.
For example, if we have the vector [a 1 , a 2 ... a n ] and the vector [b 1 , b 2 ... b n ], their dot product is:
(a 1 b 1 + a 2 b 2 ... + a n b n ). You are given the length n of each of the vectors on the first input line (In order to perform a dot
product of two vectors, they have to be with equal dimensions). On the next n lines, you are given the members of the
first vector, and on the next n ones, the members of the second one.
 */

#include <stdio.h>

int main()
{
    int dimension, dotProduct=0;
    printf("Enter dimension of the vectors: ");
    scanf("%d", &dimension);
    int vector_1[dimension], vector_2[dimension];
    printf("Enter members of first vector: ");
    for(int i=0; i<dimension; i++)
    {
        scanf("%d", &vector_1[i]);
    }
    printf("Enter members of second vector: ");
    for(int i=0; i<dimension; i++)
    {
        scanf("%d", &vector_2[i]);
    }
    for(int i=0; i<dimension; i++)
    {
        dotProduct +=vector_1[i]*vector_2[i];
    }
    printf("Dot product=%d", dotProduct);
    
    return 0;
}

