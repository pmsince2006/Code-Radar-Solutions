#include <stdio.h>
int main(){
    int n,i,j,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=1;
        for(j=1;j<=n;j++){
            int d = a + 64;
            char ch = (char)d;
            printf("%d",d);
            a++;
        }
    }
    return 0;
}