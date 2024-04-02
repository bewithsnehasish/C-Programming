#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    
    // Using getch
    puts("Enter a character using getch:");
    ch = getch(); // Reads a character from input without echoing it
    puts("Character entered using getch:");
    putchar(ch); // Prints the character
    putchar('\n');
    
    // Using getche
    puts("Enter a character using getche:");
    ch = getche(); // Reads a character from input and echoes it
    puts("\nCharacter entered using getche:");
    putchar(ch); // Prints the character
    putchar('\n');
    
    // Using getchar
    puts("Enter a character using getchar:");
    ch = getchar(); // Reads a character from input and echoes it
    puts("\nCharacter entered using getchar:");
    putchar(ch); // Prints the character
    putchar('\n');
    
    return 0;
}
