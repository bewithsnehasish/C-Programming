#include <stdio.h>

void armstrong();

int main() {
    armstrong();
    return 0;
}

void armstrong() {
    int n, temp, ans = 0, check;
    printf("Enter the number to check the armstrong: ");
    scanf("%d", &n);
    check = n;

    while (n != 0) {
        temp = n % 10;
        n = n / 10;
        ans = ans + temp * temp * temp;
    }

    if (check == ans)
        printf("The Given input n = %d is an Armstrong Number", check);
    else
        printf("The Given input n = %d is not an Armstrong Number", check);
}
