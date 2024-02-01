// You are using GCC
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?(a>c)?printf("%d is greater",a):printf("%d is greater",c):printf("%d is greater",b);
}