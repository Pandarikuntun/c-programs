// with return type and without argument
//arithmetic operation
#include <stdio.h>

int arithmetic_op() {
    int a, b;
    char choice;

    printf("Enter the a and b values: ");
    scanf("%d%d", &a, &b);

    printf("a = %d  b = %d\n", a, b);
    printf("+ : Add\n- : Subtract\n* : Multiply\n/ : Divide\n");

    // space before %c skips leftover newline
    scanf(" %c", &choice);

    switch (choice) {
        case '+': return a + b; break;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b != 0)
                return a / b;
            else
                return 0; // division by zero
        default:
            return 0; // invalid operator
    }
}

int main() {
    int result;
    result = arithmetic_op();
    printf("Result: %d\n", result);
    return 0;
}

