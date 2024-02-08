#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num );
    int result = 1;
    for(int i=1; i <=num ; ++i){
        result = result * i;
    }
    printf("%d \n",result);
}