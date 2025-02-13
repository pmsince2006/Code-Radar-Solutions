// Your code here...
#include <stdio.h>

unsigned int lowestSetBit(unsigned int num) {
    return num & -num;
}

int main() {
    unsigned int num;

    scanf("%u", &num);

    unsigned int result = lowestSetBit(num);
    if (result != 0) {
        printf("%u", result);
    } else {
        printf("%u", num);
    }

    return 0;
}
