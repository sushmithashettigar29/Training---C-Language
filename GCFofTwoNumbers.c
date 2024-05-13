/*
Create a function GCF() to take two numbers being passed as arguments and return the Greatest Common Factor. That is, return the greatest number that evenly goes into both numbers with no remainder. For example: 12 and 16 both are divisible by 1, 2. and 4 so the output should be 4. The range for both parameters will be from 1 to 10^3
Examples
Input: 7& 13
Output: 1

Input: 36 & 54
Output: 18
*/

#include<stdio.h>
#include<math.h>
void printGCF(int num1, int num2){
    int min = (num1<num2)? num1:num2;
    int GCF = 1;
    for(int i=1;i<=min;i++){
        if(num1%i == 0 && num2%i ==0){
            GCF = i;
        }
    }
    printf("GCF is : %d\n",GCF);
}
void main()
{
    int num1,num2;
    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);
    if(1<num1<pow(10,3) && 1<num2<pow(10,3)){
        printGCF(num1,num2);
    }else{
        return;
    }

}