#include <stdio.h>

int main()
{
    double x, y;
    char z;

    printf("Welcome to Arda's Calculator!\n\nPlease enter the first number: ");
    scanf("%lf", &x);
    printf("\nEnter the second number: ");
    scanf("%lf", &y);
    printf("\nChoose your operation (+, -, *, /): ");
    scanf(" %c", &z);

    if (z == '+') {
        printf("%lf", x + y);
    }
    else if (z == '-') {
        printf("%lf", x - y);
    }
    else if (z == '*') {
        printf("%lf", x * y);
    }
    else if (z == '/') {
        if (y == 0) {
            printf("Undefined (division by zero!)");
        } else {
            printf("%lf", x / y);
        }
    }
    else {
        printf("Invalid Operation!");
    }

    return 0;
}
