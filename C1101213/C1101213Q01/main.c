#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

long long convertDecimalToBinary(long n) {
    long long binaryNumber = 0;
    unsigned long long remainder, i = 1, step = 1;

    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}

int main() {
    long dec;
    scanf_s("%ld", &dec);
    if (dec < 0) dec = 4294967295 + dec;
    printf("%ld, ", dec);
    long long bin = convertDecimalToBinary(dec);
    //printf("%lld", bin);
    return 0;
}