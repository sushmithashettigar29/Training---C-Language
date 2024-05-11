/*
Write requirements, test cases,
pseudo code and actual code for the following kids game pigLatin

"pigLatin" is an encoding algorithm with the
following steps
1.First letter of the word is moved to the end
2.Letter ‘a’ is added to the word after the move
e.g.piglatin of word ‘program’ is ‘rogrampa’ and piglatin
of ‘ping pong’ is ‘ingpa ongpa’
•Write
details of what your program will perform in simple English in a text file
•Create
test cases for your program
•Create
as many functions as possible
*/

/*
Requirements:

Input: The program should take a string input from the user.
Word Splitting: It should split the input string into individual words.
PigLatin Transformation: Apply the pigLatin transformation to each word.
Output: Print the modified string with pigLatin transformed words in one line.
Test Cases:

Input: "Hello world"
Expected Output: "elloha orldwa"
Input: "This is a test"
Expected Output: "hisTa siTa aTa estTa"
Input: "Programming is fun"
Expected Output: "rogrammingPa siPa unfA"
Pseudo-code:

Input:
Accept a string input from the user.
Word Splitting and PigLatin Transformation:
Initialize a loop to iterate through each character of the input string.
Create a temporary array to store each word.
Whenever a space or end of string is encountered:
Apply the pigLatin transformation to the current word.
Print the transformed word followed by a space.
Reset the temporary array for the next word.
Output:
Print a newline character to end the line after all words have been transformed and printed.

*/

#include<stdio.h>
#include<string.h>

void pigLatin(char word[]) {
    int length = strlen(word);
    char firstLetter = word[0];

    for (int i = 0; word[i] != '\0'; i++) {
        word[i] = word[i + 1];
    }

    word[length - 1] = firstLetter;
    word[length] = 'a';
    word[length + 1] = '\0';
}

void splitStringIntoWords(char str[]) {
    char word[20]; 
    int wordIndex = 0;

    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[wordIndex] = '\0';
            pigLatin(word);
            printf("%s ", word);
            wordIndex = 0;
        } else {
            word[wordIndex++] = str[i];
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Original string is : %s", str);

    printf("\nString after pigLatin transformation: ");
    splitStringIntoWords(str);
    printf("\n");

    return 0;
}



