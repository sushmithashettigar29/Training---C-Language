/*
Write a program in C to find the length of a string entered by the user.  Use "\0" to check the string termination

*/
#include<stdio.h>
void main()
{
    char name[20];
    printf("Enter a string : ");
    // fgets(name, sizeof(name), stdin);
    scanf("%[^\n]",name);

    int counter = 0;
    for(int i=0;name[i] !='\0';i++){
        counter++;
    }
    printf("Length is %d\n",counter);
}