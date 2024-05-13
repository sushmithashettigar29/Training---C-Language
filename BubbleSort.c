#include<stdio.h>
void printSortedArray(int array[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //descending order
            if(array[j] < array[j+1]){
                //swapping
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1]= temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
}
void main()
{
    int n = 12;
    int array[n];
    printf("Enter 12 array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    printSortedArray(array,n);
}