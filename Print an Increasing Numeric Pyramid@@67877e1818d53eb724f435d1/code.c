#include <stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    int nsp = n-1;
    for(i=1;i<=n;i++){
        for (int q=1;q<=nsp;q++){
            printf(" ");
        }
        nsp--;
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}