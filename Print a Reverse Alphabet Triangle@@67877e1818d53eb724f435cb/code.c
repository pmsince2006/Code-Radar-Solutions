#include <stdio.h>
int main(){
    int n,i,j,a;
    char ch;
    a = 1;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            int d = a + 65;
            ch = (char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}