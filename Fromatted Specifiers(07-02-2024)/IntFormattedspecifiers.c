#include <stdio.h>

int main(){
    int a = 34545678967;
    printf("%5d \n",a);
    printf("%-5d \n",a);
    printf("%.5d \n",a);

    float b = 3213.435;
    printf("%e \n",b);
    printf("%f \n",b);
    printf("%g \n",b);
    printf("%.3g \n",b);

    char ch = "ABC";
    int x = printf("%c \n",ch);
    printf("%d \n",x);

    char ch[10] = "Snehasish Mandal";
    printf("%c",ch);
    printf("%5c \n",a);
    printf("%-5c \n",a);
    printf("%.5c \n",a);
}