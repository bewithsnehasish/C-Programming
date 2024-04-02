#include <stdio.h>

int findGreatest(int num1, int num2, int num3);

int main() {
    int a, b, c;

    // Input the first integer
    printf("Enter the first integer: ");
    scanf("%d", &a);

    // Input the second integer
    printf("Enter the second integer: ");
    scanf("%d", &b);

    // Input the third integer
    printf("Enter the third integer: ");
    scanf("%d", &c);

    // Find and print the greatest
    int greatest = findGreatest(a, b, c);
    printf("The greatest number is: %d\n", greatest);

    return 0;
}

int findGreatest(int num1, int num2, int num3) {
    int greatest = num1;

    if (num2 > greatest) {
        greatest = num2;
    }

    if (num3 > greatest) {
        greatest = num3;
    }

    return greatest;
}
