// with return type and with arguments
// arithmetic on integer
#include <stdio.h>

int operation_int(int a, int b, int choice) {
    switch (choice) {
        case 1:  return a + b;
        case 2:  return a - b;
        case 3:  return a * b;
        case 4:
            if (b != 0)
                return a / b;
            else
                return 0; // or handle divide by zero error differently
        default:
            return 0; // 'default' was misspelled as 'defalt'
    }
}

int main() {
    int choice, a, b;
    printf("Enter the values a and b: ");
    scanf("%d %d", &a, &b);

    printf("1 for Add\n2 for Subtract\n3 for Multiply\n4 for Divide\nEnter the operation: ");
    scanf("%d", &choice);

    printf("Result = %d\n", operation_int(a, b, choice));
    return 0;
}

