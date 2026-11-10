#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    char c;
    printf("Введите символ: ");
    scanf("%c", &c);

    // проверяем, находится ли символ в диапазоне от 0 до 9
    if (c >= '0' && c <= '9')
        printf("Это цифра\n");
    else
        printf("Это буква (или другой символ)\n");

    return 0;
}
