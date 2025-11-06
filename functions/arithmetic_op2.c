// with return type and with arguments
// arithmetic operation in float
#include <stdio.h>

int arithmetic_op() {
    int a;
	float b;
    char choice;

    printf("Enter the a and b values: ");
    scanf("%d%f", &a, &b);

    printf("a = %d  b = %.2f\n", a, b);
    printf("+ : Add\n- : Subtract\n* : Multiply\n/ : Divide\n");

    // space before %c skips leftover newline
    scanf(" %c", &choice);

    switch (choice) {
        case '+': return a + b;
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
    float result;
    result = arithmetic_op();
    printf("Result: %.2f\n", result);
    return 0;
}

