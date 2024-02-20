#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the sum of even factors
    for (int i = 2; i <= n; i += 2) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Output the sum of even factors
    printf("Sum of even factors of %d: %d\n", n, sum);

    return 0;
}
