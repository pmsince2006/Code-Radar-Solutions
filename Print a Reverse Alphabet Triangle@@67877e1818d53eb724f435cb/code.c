#include <stdio.h>
int main(){
    int n,i,j,a;
    char ch;
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        ch = 'A' + n - i - 1;
        for (j = 0; j <= i; j++) {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }
        return 0;
    }