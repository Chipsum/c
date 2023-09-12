#include <stdio.h>

int main() {
    char character;
    
    printf("Enter a character to convert it into hex (Ctrl+C to exit): ");

    while (scanf(" %c", &character) != EOF) {
        printf("Hexadecimal value of '%c' is 0x%x\n", character, character);
        
        // Clear the input buffer
        while (getchar() != '\n'); 
        printf("\nEnter another character (Ctrl+C to exit): ");
    }

    return 0;
}