#include <stdio.h>

int main() {
    int num, i;
    scanf("%d", &num);
    
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("Number is not prime\n");
            break;
        }
        else continue;
    }
    
    if (i == num) {
        printf("Given number is prime\n");
    }
    
    return 0;
}
