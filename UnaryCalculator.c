/*
Write a C program to create a Unary operations calculator which
calculates the following for a given input and keeps asking for input until
user enters 0
Square,Squareroot,Cube,Cuberoot,Factorial,Logarithm,Exponent,Absolute,RoundUp to nearest integer,RoundDown to nearest integer
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int factorial(float num){
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact *= i;
    }
    return fact;
}
void main()
{
    float num;
    int op;
    printf("Enter a number : ");
    scanf("%f",&num);
    printf("UNARY OPERATOR CALCULATOR\n");
    printf("1.Square\n2.Squareroot\n3.Cube\n4.Cuberoot\n5.Factorial\n6.Logarithm\n7.Exponent\n8.Absolute\n9.RoundUp to nearest integer\n10.RoundDown to nearest integer\n");
    while(1)
    {
        printf("Enter your choice : ");
        scanf("%d",&op);
        switch (op)
        {
        case 1: printf("Square is : %f\n",num*num);
                break;
        case 2: printf("Square root is : %f\n",sqrt(num));break;
        case 3: printf("Cube is : %f\n",num*num*num);break;
        case 4: printf("Cuberoot is : %f\n",cbrt(num));break;
        case 5: printf("Factorial is : %d\n",factorial(num));break;
        case 6: printf("Logarithm is : %f\n",log(num));break;
        case 7: printf("Exponent is : %f\n",exp(num));break;
        case 8: printf("Absolute is : %f\n",abs(num));break;
        case 9: printf("RoundUp is : %f\n",ceil(num));break;
        case 10: printf("RoundDown is : %f\n",floor(num));break;
        default:exit(0);
        }
    }
}