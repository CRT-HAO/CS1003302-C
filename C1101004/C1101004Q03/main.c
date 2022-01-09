#include <stdio.h>

int main()
{
    int num1, num2;
    char symbol;
    scanf_s("%d %c %d", &num1, &symbol, 1, &num2);
    printf("%d %c %d", num1, symbol, num2);
    return 0;
}