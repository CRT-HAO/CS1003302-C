#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int height, width;
	scanf("%d", &height);
	width = height * 2 - 1;
	for (int i = 0; i < height - 1; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < width; j++) {
			printf("*");
		}
		printf("\n");
		width -= 2;
	}
	width = 1;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < height - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j < width; j++) {
			printf("*");
		}
		printf("\n");
		width += 2;
	}
	return 0;
}