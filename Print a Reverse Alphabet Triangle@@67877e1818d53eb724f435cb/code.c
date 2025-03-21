#include <stdio.h>
int main(){
    int n,i,j,a;
    char ch;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=98;
        for(j=1;j<=i;j++){
            int d = a - 1;
            char ch = (char)d;
            printf("%c ",ch);
            a--;
        }
        printf("\n");
    }
        return 0;
    }