#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>0&&m<0 || n==0&&m==0){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}