#include <stdio.h>
int main(){
    int n,i,j,a;
    char ch;
    scanf("%d",&n);
    for (i = 0; i < rows; i++) {
        ch = 'A' + rows - i - 1;
        for (j = 0; j <= i; j++) {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
        printf("\n");
    }
        return 0;
    }