#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a = i-1;
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        int nsp = n-1;
        for(int q=1;q<=nsp;q++){
            printf(" ");
            nsp--;
        }
        for(k=1;k<=a;k++){
            printf("%d",k);
            a--;
        }
        printf("\n");
    }
    return 0;
}