#include <stdio.h>
int main(){
    int i,j,n,a;
    scanf("%d",&n);
    a = 1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            int d = a + 64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}