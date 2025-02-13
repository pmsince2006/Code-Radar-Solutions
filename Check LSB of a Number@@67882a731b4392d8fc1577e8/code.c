// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Input an integer
    scanf("%d", &num);

    // Check if LSB is set
    if (num & 1) {
        printf("Set", num);
    } else {
        printf("Not Set", num);
    }

    return 0;
}
