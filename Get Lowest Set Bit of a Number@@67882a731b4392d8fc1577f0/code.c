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
        printf("%u", num);
    } else {
        printf("%u", result);
    }

    return 0;
}
