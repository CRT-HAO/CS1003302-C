#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
    int num;
    scanf_s("%d", &num);
    if (num >= 0) {
        printf("%d", func(num));
    }
    else {
        printf("\"Invalid input\"");
    }
    return 0;
}

int func(int num) {
    switch (num) {
    case 0:
        return 0;
    case 1:
        return 1;
    default:
        return func(num - 1) + func(num - 2);
    }
}