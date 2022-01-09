#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <math.h>

char history[10000000][100];

int i = 0;
void move(n, a, b, c) {
    sprintf(history[i], "Disk %d moved from %c to %c\n", n, a, c);
    i++;
}

void hanoi(int n, char a, char b, char c) {
    if (n == 1) {
        move(n, a, b, c);
    } else {
        hanoi(n - 1, a, c, b);
        move(n, a, b, c);
        hanoi(n - 1, b, a, c);
    }
}

int main()
{
    int n, step;
    scanf_s("%d", &n);
    scanf_s("%d", &step);
    int q = pow(2, n) - 1;
    if (n >= 1) {
        hanoi(n, 'A', 'B', 'C');
        //for (int i = 0; i < q; i++) {
        //    printf(history[i]);
        //}
        if (step <= q) {
            printf(history[step - 1]);
        }
        else {
            printf("Step out of range");
        }
    }
    else {
        printf("Invalid disk number");
    }
    return 0;
}