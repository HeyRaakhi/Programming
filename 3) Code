//WAP that shows wether a single character is vowel, consonant, digit or a special character:

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) 
    {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    } 
    else if (isdigit(ch)) { // Check if it is a number
        printf("'%c' is a digit.\n", ch);
    } 
    else { // Anything else is a special character
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}
