#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    scanf("%d %d %c", &num1, &num2, &operator);

    switch (operator) {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0)
                printf("%d", num1 / num2);
            break;
            else:
            printf("error");
    }

    return 0;
}
