/*
How to determine the number of elements in an array?
*/

//This program determines the number of elements in a one dimension array
#include<stdio.h>
int main (void) {
    int oneDimensionalArray[10], elementsInArray;

    elementsInArray = sizeof(oneDimensionalArray)/sizeof(oneDimensionalArray[0]);

    printf("Size is : %d", elementsInArray);

    return 0;
}