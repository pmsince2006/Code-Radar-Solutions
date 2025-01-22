#include <stdio.h>

int main() {
    float p,q,r,,sum,avg;
    scanf("%f ,%f ,%f",&p,&q,&r);
    sum=(p+q+r);
    avg = sum/3;
    printf("Average: %.2f",&avg);
    return 0;
}