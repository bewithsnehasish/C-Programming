#include <stdio.h>

void fibonacci();

int main() {
    fibonacci();
    return 0;
}

void fibonacci() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d ", first, second);

    for (int i = 3; i <= n; ++i) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}
