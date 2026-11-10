#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float x, y;
    char c;

    printf("Enter expression (e.g., 5+2 or 2^3, without spaces): "); // приглашение к вводу

    scanf("%f%c%f", &x, &c, &y); // считывание

    printf("%.2f %c %.2f", x, c, y); // вывод выражения

    // арифметические действия
    switch (c) {
    case '+':
        printf(" = %.2f\n", x + y);
        break;
    case '-':
        printf(" = %.2f\n", x - y);
        break;
    case '*':
        printf(" = %.2f\n", x * y);
        break;
    case '/':
        // проверка деления на ноль
        if (y == 0) {
            printf(" = Error (division by zero)\n");
        }
        else {
            printf(" = %.2f\n", x / y);
        }
        break;
    case ' ':
        printf(" = Error (space detected). Please try again without spaces.\n");
    default:
        printf(" = Error (unknown operator). Please try again. Operation list: +, -, * and / (without spaces).\n");
        break;
    }

    return 0;
}
