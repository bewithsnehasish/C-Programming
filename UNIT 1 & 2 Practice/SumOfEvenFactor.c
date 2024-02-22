#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        if (n % i == 0) {
            sum += i;
        }
    }
    printf("Sum of even factors of %d: %d\n", n, sum);

    return 0;
}
