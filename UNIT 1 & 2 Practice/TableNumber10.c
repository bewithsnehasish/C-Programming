#include <stdio.h>

int main() {
    int num, count = 10;
    scanf("%d", &num);
    
    for (int i = 1; i < count; i++) {
        printf("%d X %d = %d \n",num,i,num*i);
    }

    return 0;
}