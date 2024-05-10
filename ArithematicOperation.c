/*
Writea C program to accept two inputs ax and ay and show
sum(ax + ay) of these two numbers
Absolute difference (|ax-ay|) of the two numbers (use abs() function)
Difference(ax – ay)
Quotient(ax/ay)
 */

#include<stdio.h>
#include<stdlib.h>
void main()
{
    double ax,ay;
    int op;
        printf("Enter the value of ax : ");
        scanf("%lf",&ax);
        printf("Enter the value of ay : ");
        scanf("%lf",&ay);
        printf("ARITHEMATIC OPERATION\n");
        printf("Sum is : %f\n",ax+ay);
        printf("Absolute Difference is : %f\n",abs(ax)-abs(ay));
        printf("Difference is : %f\n",ax-ay);
        printf("Quotient is : %f\n",ax/ay);  
}