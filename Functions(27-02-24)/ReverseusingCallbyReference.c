#include <stdio.h>
void reverseNumber(int *num) {
    int reversed = 0;

    while (*num != 0) {
        int digit = *num % 10;
        reversed = reversed * 10 + digit;
        *num /= 10;
    }

    *num = reversed;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Before reversing: %d\n", number);
    reverseNumber(&number);
    printf("After reversing: %d\n", number);     

    return 0;
}
