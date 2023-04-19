#include <stdio.h>

int main()
{
    int a, b;

    printf("Введите первое целое число: ");
    scanf("%d", &a);
    printf("Введите второе целое число: ");
    scanf("%d", &b);

    printf("сумма двух веденных чисел = %d\n", a+b);

    printf("разность двух веденных чисел = %d\n", a-b);


    return 0;
}
