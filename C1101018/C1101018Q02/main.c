#include <stdio.h>

int main()
{
    int height = 0;
    scanf_s("%d", &height);
    if (height >= 1 && height <= 26) {
        int width = 1;
        for (int i = 0; i < height; i++) {
            char c = 'A' + i;
            for (int n = 0; n < (height - 1) - i; n++) printf(" ");
            for (int n = 0; n < width; n++) printf("%c", c);
            printf("\n");
            width += 2;
        }
    }
    return 0;
}