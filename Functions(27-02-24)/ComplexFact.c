
//WAP to take a number and find its factorial. the result of factorial should be passed to another function where sum of digits of factorial is calculated until single digit is the obtained also calculate the steps at how many steps the sum of digits is calculated until we get the single digit as answer


#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int sumOfDigits(unsigned long long num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    while (sum > 9) {
        int tempSum = 0;
        while (sum != 0) {
            tempSum += sum % 10;
            sum /= 10;
        }
        sum = tempSum;
    }

    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    unsigned long long fact = factorial(n);

    printf("Factorial of %d: %llu\n", n, fact);
    int sum = sumOfDigits(fact);
    int steps = 1;
    while (sum > 9) {
        steps++;
        sum = sumOfDigits(sum);
    }

    printf("Sum of digits until single digit: %d\n", sum);
    printf("Number of steps: %d\n", steps);

    return 0;
}
