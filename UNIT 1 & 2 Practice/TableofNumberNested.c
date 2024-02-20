#include <stdio.h>

int main() {
    int num, limit;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Multiplication Table of %d up to %d:\n", num, limit);
    for (int i = 1; i <= limit; ++i) {
        for (int j = 1; j <= num; ++j) {
            printf("%d * %d = %d\t", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}
