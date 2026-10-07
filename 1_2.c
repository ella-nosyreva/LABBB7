#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void task1()

{
	setlocale(LC_ALL, "Russian");
	char c;
	printf("Введите символ: ");
	scanf("%c", &c);

	switch (c)

	{
		case '0':
		case '1':
		case '2':
			printf("Это цифра\n");
			break;

		case 'a':
		case 'b':
		case 'c':
			printf("Это буква\n");
			break;
		default:
			printf("Неизвестный символ\n");
			break;
	}
	return 0;
}

int main() 

{

    setlocale(LC_ALL, "Russian");
    float x, y;   
    char c;       
    printf("Введите выражение: ");
    scanf("%f%c%f", &x, &c, &y);

    switch (c)

    {
        case '+':
            printf("=%f\n", x + y);
            break;
        case '-':
            printf("=%f\n", x - y);
            break;
        case '*':
            printf("=%f\n", x * y);
            break;
        case '/':
            if (y != 0)
                printf("=%f\n", x / y);
            else
                printf("Ошибка: деление на ноль\n");
            break;

        case '^':
            printf("=%f\n", pow(x, y));
            break;

        default:
            printf("Неизвестная операция\n");
            break;
    }
    return 0;
 
}