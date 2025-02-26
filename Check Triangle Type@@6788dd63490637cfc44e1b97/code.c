#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c){
        printf("Equilateral");
    }
    else if((a==b&&(c>a&&c>b))||(b==c&&(a>b&&a>c))||(a==c&&(b>a&&b>c))){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}