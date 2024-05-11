/*
You are required to ask the user to enter an integer.  If the user does not enter a valid integer, you will prompt again to enter a valid integer until the user enters a valid integer or 0 to exit.

Once the user enters a valid integer you are required to reverse the integer e.g. 2367 should be reversed as 7632.

Write pseudocode for three functions 
main() consisting of main loop to get the number from the user and print the number of digits and reversed number

countDigits() to count the number of digits in the entered number and show the number of digits to the user

reverseNumber() to reverse the entered number and show the reversed number to the user
*/
#include<stdio.h>
int countDigits(int num){
    int count = 0;
    while(num != 0){
        count++;
        num = num/10;
    }
    return count;
}
int reverseNumber(int num){
    int rem = 0;
    int reverse = 0;
    while(num!=0){
        rem = num%10;
        reverse = rem + reverse*10;
        num = num/10;
    }
    return reverse;
}
void main()
{
    int num;
    while(1)
    {
        printf("Enter a valid number (0 for exit): ");
        scanf("%d",&num);
        if(num == 0)
        {
            printf("Exiting..\n");
            return;
        }else{
            printf("The reversed number is : %d\n",reverseNumber(num));
            printf("The number count is : %d\n",countDigits(num));
        }
    }
}