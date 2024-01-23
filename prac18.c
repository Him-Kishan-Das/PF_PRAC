#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // Input a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character in the string
    for (int i = 0; str[i] != '\0'; ++i) {
        char currentChar = tolower(str[i]);

        // Check if the current character is an alphabet
        if (currentChar >= 'a' && currentChar <= 'z') {
            // Check if the character is a vowel
            if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        }
    }

    // Display the result
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
