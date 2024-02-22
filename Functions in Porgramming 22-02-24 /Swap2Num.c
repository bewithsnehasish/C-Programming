#include <stdio.h>
void swap(int, int);
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("Values of X and Y before Swap %d & %d \n",x,y);
    swap(x,y);
}

void swap(int a , int b){
    int temp = a;
    a = b ;
    b = temp;
    printf("Values of X and Y after swapping is %d and %d",a,b);
}