#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>

int main() {
    int qty = 0;
    int nums[100];
    int repeat[100];
    int k = 0;
    scanf_s("%d", &qty);
    for (int i = 0; i < qty; i++) {
        scanf_s("%d", &nums[i]);
        bool is_repeat = false;
        for (int q = 0; q < qty; q++) {
            if (nums[i] == nums[q] && i != q) is_repeat = true;
        }
        if (is_repeat) {
            for (int q = 0; q < k; q++) {
                if (nums[i] == repeat[q]) is_repeat = false;
            }
        }
        if (is_repeat) {
            repeat[k] = nums[i];
            k++;
        }
    }
    if (k > 0) {
        sort(repeat, k);
        for (int i = 0; i < k; i++) {
            printf("%d", repeat[i]);
            if (i != k - 1) printf(" ");
        }
    }
    else {
        printf("No repeated number!");
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