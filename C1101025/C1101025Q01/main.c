#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
    int qty = 0;
    int number[100];
    scanf_s("%d", &qty);
    for (int i = 0; i < qty; i++) {
        scanf_s("%d", &number[i]);
    }
    sort(number, qty);
    for (int i = 0; i < qty; i++) {
        printf("%d", number[i]);
        if (i != qty - 1) printf(" ");
    }
    return 0;
}

int sort(int* array, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}