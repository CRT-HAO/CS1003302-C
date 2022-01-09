#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
    int qty;
    int nums[100];
    int index[100];
    for (int i = 0; i < 100; i++) {
        index[i] = i;
    }
    scanf_s("%d", &qty);
    for (int i = 0; i < qty; i++) {
        scanf_s("%d", &nums[i]);
    }
    sort(qty, nums, index);
    for (int i = 0; i < qty; i++) {
        printf("%d", index[i]);
        if (i != qty - 1) printf(" ");
    }
    return 0;
}

int sort(int qty, int* target, int* result_index) {
    for(int i = 0; i < qty; i++) {
        for (int j = 0; j < qty - i - 1; j++) {
            if (target[j] > target[j + 1]) {
                int num_tmp = target[j];
                target[j] = target[j + 1];
                target[j + 1] = num_tmp;
                int num_index_tmp = result_index[j];
                result_index[j] = result_index[j + 1];
                result_index[j + 1] = num_index_tmp;
            }
        }
    }
    return 0;
}