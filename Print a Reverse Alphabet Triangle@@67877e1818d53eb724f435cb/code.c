#include <stdio.h>
int main(){
    int n,i,j,a;
    char ch;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c ",ch);
            ch ++;
        }
        printf("\n");
    }
    return 0;
}