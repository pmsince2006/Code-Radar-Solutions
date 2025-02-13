// Your code here...
#include <stdio.h>

int main() {
    unsigned int num;

    // Input an integer
    scanf("%u", &num);

    // Find the number of bits in an unsigned int
    int bits = sizeof(unsigned int) * 8;

    // Check if the MSB is set
    if (num & (1 << (bits - 1))) {
        printf("Set", num);
    } else {
        printf("Not Set", num);
    }

    return 0;
}
