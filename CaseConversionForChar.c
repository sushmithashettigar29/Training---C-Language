/*
Using getchar() and putchar() and toupper() functions, convert lowercase characters entered by user into uppercase

*/

#include<stdio.h>
#include<ctype.h>
void main()
{
    printf("Enter the character :");
    char ch = getchar();
    
    ch =  toupper(ch);

    printf("After upper case name is : ");
    putchar(ch);
}