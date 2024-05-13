/*
This is an interview question from 7edge solutions:

Palindrome is a string that reads the same forward as it is backward

Create a function checkIfPalindrome(str) take the str parameter being passed and return 1 if the parameter str is a palindrome, otherwise return 0. The parameter str may have punctuation and symbols but they should not affect whether the string is in fact a palindrome. For example: “Anne, I vote more cars race Rome-to-Vienna” should return true.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int checkPalindrome(char str[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (!isalpha(str[start]) || isspace(str[start])) {
            start++;
            continue; // Skip special characters and spaces
        }
        if (!isalpha(str[end]) || isspace(str[end])) {
            end--;
            continue; // Skip special characters and spaces
        }

        if (tolower(str[start]) != tolower(str[end])) {
            return 0; // Not a palindrome
        }

        start++;
        end--;
    }

    return 1; // Palindrome
}

int main() {
    char str[50];
    printf("Enter a string : ");
    scanf(" %[^\n]", str);

    int length = strlen(str);
    int res = checkPalindrome(str , length);

    printf("%d", res);

    return 0;
}
