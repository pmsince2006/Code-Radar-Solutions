#include <stdio.h>
int main(){
    int n,i,j;
    for (n=i;i>=1;i++){
        for(j=1;j>=i;j++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}