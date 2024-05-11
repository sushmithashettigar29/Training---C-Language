#include<stdio.h>
void main()
{
    int arrays[10];
    printf("Size of arrays is : %d\n",sizeof(arrays));
    printf("Number of elements are : %d\n",sizeof(arrays)/sizeof(arrays[0]));
}