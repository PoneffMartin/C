/* 
Write a function that takes a pointer of any type, size of bytes n and row length len. The function should print a
total of n bytes, starting from the address of the pointer.
The output should be formatted into several rows, each holding len bytes. At the start of each row, print the address
of the initial byte.
Note: The addresses may vary.
 */

#include <stdio.h>
#include <string.h>

void mem_dump(void* ptr, int n, int len)
{
    int i, j=0, k=0;
    char *pointer=ptr;
    int rows=n/len;
    while(rows*len<n)
    {
        rows++;
    }
    for(i=0; i<rows; i++)
    {
        printf("%p ", pointer+(i*len));
        while(j<len&&k<n)       
        {
            printf("%02hhx ", *(pointer+k));
            j++;
            k++;
        }
        j=0;
        printf("\n");
    }
}
int main()
{
    int array[] = { 7, 3, 2, 10, -5 };
    size_t size = sizeof(array) / sizeof(int);
    mem_dump(array, size * sizeof(int), 4);
    
    return 0;
}

