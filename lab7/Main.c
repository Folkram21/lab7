#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int month;

	// приглашение и ввод пользователя
	printf("Enter the month number to determine the season -> ");
	scanf("%d", &month);

	printf("Season is "); // начало строки

	// распределение сезонов года по номеру месяца
	switch (month) {
		// три номера обозначают один сезон
		case 12: // пустой, провалиться вниз до break
		case 1:
		case 2:
			printf("Winter");
			break;

		case 3:
		case 4:
		case 5:
			printf("Autumn");
			break;

		case 6:
		case 7:
		case 8:
			printf("Summer");
			break;

		case 9:
		case 10:
		case 11:
			printf("Spring");
			break;

		// валидация
		default:
			printf("not even exist x_x (please try again)");
	}

	return 0;
}
