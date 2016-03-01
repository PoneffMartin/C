/* 
The cross product of vectors is defined only in a dimension where n = 3. It takes as input two vectors and produces a
new one in the same dimension. Each member of the resulting vector is a result of the determinant of the members
from different rows in the first vector. Example:
[a 1 , a 2 , a 3 ] x [b 1 , b 2 , b 3 ] = [ (a 2 *b 3 – a 3 *b 2 ),
(a 3 *b 1 – a 1 *b 3 ), ( a 1 *b 2 – a 2 *b 1 ) ]
Note how the middle row is calculated with the terms backwards or you could just take the negative of the regular
calculation. On the first 3 input lines, you are given the members of the first vectors, and on the next ones, you are given
the members of the second one.
 */

#include <stdio.h>

int main()
{
    int vector_1[3], vector_2[3], cross_product[3];
    for(int i=0; i<3; i++)
    {
        scanf("%d", &vector_1[i]);
    }
    for(int i=0; i<3; i++)
    {
        scanf("%d", &vector_2[i]);
    }
    /*[a 1 , a 2 , a 3 ] x [b 1 , b 2 , b 3 ] = [ (a 2 *b 3 – a 3 *b 2 ),
    (a 3 *b 1 – a 1 *b 3 ), ( a 1 *b 2 – a 2 *b 1 ) ]*/
    for(int i=0; i<3; i++)
    {
        switch(i)
        {
            case 0:
                cross_product[i]=vector_1[1]*vector_2[2]-vector_1[2]*vector_2[1];
                break;
            case 1:
                cross_product[i]=vector_1[2]*vector_2[0]-vector_1[0]*vector_2[2];
                break;
            default:
                cross_product[i]=vector_1[0]*vector_2[1]-vector_1[1]*vector_2[0];
        }
    }
    printf("[%d, %d, %d]", cross_product[0], cross_product[1], cross_product[2]);
    
    
    return 0;
}

