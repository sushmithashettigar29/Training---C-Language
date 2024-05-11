/*
Write a program in C to print all unique elements in an array.
*/

#include<stdio.h>
void printUniqueElement(int arrs[], int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(arrs[i] == arrs[j]){
                break;
            }
        }
        if(i == j){
            printf("%d ",arrs[i]);
        }
    }
    printf("\n");
}

void main()
{
    int arrs[10] = {2,4,6,8,2,1,6,4,4,9}; 
    int n = sizeof(arrs)/sizeof(arrs[0]);
    printUniqueElement(arrs,n);
}