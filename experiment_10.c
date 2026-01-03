//10. Program using switch case calculator



#include <stdio.h>

int main() {
    char op;
    int a, b;
    scanf(" %c", &op);
    scanf("%d %d", &a, &b);

    switch (op) {
        case '+':
            printf("%d", a + b);
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d", a / b);
            else
                printf("Division by zero not allowed");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}