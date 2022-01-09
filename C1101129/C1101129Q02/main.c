#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <string.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) < (b)) ? (a) : (b))

int findDotsPos(char* num) {
	int n = strlen(num);
	for (int i = 0; i < n; i++) {
		if (num[n - i - 1] == '.') return i;
	}
}

void scanNumChar(char *num, int *big, int dots) {
	int n = strlen(num);
	int s = 0;
	for (int i = 0; i < 30; i++) big[i] = 0;
	for (int i = 0; i < n + dots; i++) {
		char tmp = num[n - i - 1 + dots];
		if (tmp == '.') {
			s++;
		}
		else {
			big[i] = tmp - '0';
		}
	}
	for (int i = 0; i < dots; i++) {
		big[i] = 0;
	}
}

int main() {
	char num1_chr[31], num2_chr[31];
	char input[100];
	int num1[100] = { 0 }, num2[100] = { 0 };
	int dots1, dots2;
	scanf_s("%s", &num1_chr, 30);
	scanf_s("%s", &num2_chr, 30);
	dots1 = findDotsPos(&num1_chr);
	dots2 = findDotsPos(&num2_chr);
	int max_dots = max(dots1, dots2);
	int min_dots = min(dots1, dots2);
	printf("Dots:%d, ", max_dots);
	scanNumChar(&num1_chr, &num1, max_dots - dots1);
	scanNumChar(&num2_chr, &num2, max_dots - dots2);
	//printf("%d", findDotsPos(&input));
	for (int i = 0; i < 30; i++) {
		printf("%d ", num2[i]);
	}
	return 0;
}