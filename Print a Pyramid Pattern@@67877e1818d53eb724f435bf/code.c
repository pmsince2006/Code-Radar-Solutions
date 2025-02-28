#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(space=1;space <= n-i; space++){
            printf(" ");
        }
        for (i=j;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
