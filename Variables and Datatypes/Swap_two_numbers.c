/**Ques :→ Given two number a,b. You need to swap the value of a & b .
INPUT → a = 2 , b = 3 
OUTPUT → a = 3 , b = 2
**/

#include <stdio.h>

int main(){
    int a , b , temp ;
    scanf("%d %d",&a,&b);

    temp = a ; 
    a = b;
    b = temp; 

    printf("Hence the value of A and B after swaping is %d and %d",a,b);
}