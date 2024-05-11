/*
Write a program in C to copy the elements of one array into another array.
*/


#include<stdio.h>
void main()
{
    // int n;
    // int arr[n];
    // printf("Enter the number of elements : ");
    // scanf("%d",&n);
    // printf("Enter the elements is array : ");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }

    // printf("Previous array is : ");
    // for(int i=0;i<n;i++){
    //     printf(" %d ",arr[i]);
    // }
    // int newArr[n];
    
    // for(int i=0;i<n;i++){
    //     newArr[i] = arr[i];
    // }
    // printf("\nNew array is : ");
    // for(int i=0;i<n;i++){
    //     printf(" %d ",newArr[i]);
    // }


    int a[4] = {4,5,7,5};
    int b[4];

    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        b[i] = a[i];
        printf(" %d ",b[i]);
    }
    printf("\n");
}