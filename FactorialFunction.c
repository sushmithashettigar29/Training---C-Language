/*
Write the code for the function factorial(n) such that it returns a long integer as result
*/

#include<stdio.h>
int factorial(int num){
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact *= i;
    }
    return fact;
}
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int answer = factorial(num);

    printf("Factorial is : %d",answer);


}