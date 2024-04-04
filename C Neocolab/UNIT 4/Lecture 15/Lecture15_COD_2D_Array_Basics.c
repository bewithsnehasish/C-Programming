// You are using GCC

#include <stdio.h>

int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int matrix[n][m];
    for(int i = 0; i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    if(matrix[n-1][m-1]%2==0)printf("%d is even",matrix[n-1][m-1]);
    else printf("%d is odd",matrix[n-1][m-1]);
}