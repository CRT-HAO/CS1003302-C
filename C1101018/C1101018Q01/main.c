#include <stdio.h>

int main()
{
    float num1, num2, ans = 0;
    char operator;
    scanf_s("%f %c %f", &num1, &operator, 1, &num2);
    switch (operator) {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            ans = num1 / num2;
        }
        else {
            printf("Division by zero");
            return;
        }
        break;
    }
    printf("%.2f %c %.2f = %.2f", num1, operator, num2, ans);
    return 0;
}