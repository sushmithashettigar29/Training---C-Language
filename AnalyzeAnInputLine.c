/*
Write a c program that uses pointers in the program logic.  The program must perform the following function
1. Takes a long string as input with all types of characters - lower case letters, upper case letters, numbers, blank spaces and other printable characters
2. analyze this input and print how many vowels, how many consonants, how many numbers, how many blank spaces and how many other characters are present in the user entered text
3. asks user for the next string and continue steps 1 and 2 until user enters STOP as input
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
    char str[100];
    int countVowel, countConsonants, countNumbers, countSpace, countOther;

    while (1) {
        countVowel = countConsonants = countNumbers = countSpace = countOther = 0; 
        printf("Enter a string (or type STOP to exit): ");
        scanf(" %[^\n]", str);

        if (strcmp(str, "STOP") == 0) {
            break;
        }

        for(int i = 0; str[i] != '\0'; i++) {
            if(isalpha(str[i])) { 
                char c = tolower(str[i]); 
                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    countVowel++;
                } else {
                    countConsonants++;
                }
            } else if(isdigit(str[i])) { 
                countNumbers++;
            } else if(str[i] == ' ') {
                countSpace++;
            } else { 
                countOther++;
            }
        }
        
        printf("Vowels: %d\n", countVowel);
        printf("Consonants: %d\n", countConsonants);
        printf("Numbers: %d\n", countNumbers);
        printf("Blank spaces: %d\n", countSpace);
        printf("Other characters: %d\n", countOther);
    }

    return 0;
}
