/*
Write a program in C to find the factorial of a given number using pointers.
*/

#include<stdio.h>
int factorial(int num){
    int fact = 1;
    int *ptr = &fact;
    for(int i=1;i<=num;i++){
        *ptr *= i;
    }
    return *ptr;
}
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Factorial is : %d",factorial(num));
}