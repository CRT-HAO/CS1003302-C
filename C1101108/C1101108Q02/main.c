#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int binaryIntToInt(unsigned long num) {
    int dec = 0;
    int i = 0;
    while (num != 0) {
        unsigned long rem = num % 10;
        num /= 10;
        dec += rem * pow(2, i);
        i++;
    }
    return dec;
}

unsigned long binaryStringToChar(char* str) {
    char* start = &str[0];
    unsigned long total = 0;
    while (*start) {
        total *= 2;
        if (*start++ == '1') total += 1;
        printf("%d\n", total);
    }
    return total;
}

int mygcd(unsigned long a, unsigned long b) {
    while ((a %= b) && (b %= a));
    return a + b;
}

int main()
{
    int round;
    scanf_s("%d", &round);
    unsigned long number1[10000];
    unsigned long number2[10000];
    for (int i = 0; i < round; i++) {
        char binary1[50], binary2[50];
        scanf_s("%s", &binary1, 49);
        scanf_s("%s", &binary2, 49);
        number1[i] = binaryStringToChar(binary1);
        number2[i] = binaryStringToChar(binary2);
    }
    for (int i = 0; i < round; i++) {
        printf("Pair #%d: ", i+1);
        if (mygcd(number1[i], number2[i]) > 1) {
            printf("All you need is love!");
        }
        else {
            printf("Love is not all you need!");
        }
        if (i != round - 1) {
            printf("\n");
        }
    }
    return 0;
}