#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <string.h>

#define DIGITS 100

int mode = 0;

void scanNum(char* num) {
	char ch;
	int i = 0;
	while ((ch = getchar()) != '\n' && ch != '+' && ch != '-' && ch != EOF) {
		num[i] = ch;
		i++;
	}
	switch (ch) {
	case '+':
		mode = 1;
		break;
	case '-':
		mode = 2;
		break;
	}
}

void scanFromString(int *big, char* num) {
	int i = DIGITS - 1;
	int j = 0, n = strlen(num);
	while (i >= n) big[i--] = 0;
	while (i >= 0) big[i--] = num[j++] - '0';
}

void add(int* num1, int* num2) {
	for (int i = 0; i < DIGITS; i++) {
		num1[i] += num2[i];
		num1[i + 1] += num1[i] / 10;
		num1[i] %= 10;
	}
}

void sub(int* num1, int* num2) {
	for (int i = 0; i < DIGITS; i++) {
		num1[i] -= num2[i];
		if (num1[i] < 0) {
			num1[i + 1] -= 1;
			num1[i] += 10;
		}
	}
}

int main() {
	char number1[DIGITS + 1] = {0};
	char number2[DIGITS + 1] = {0};
	char result[DIGITS + 1] = {0};
	int num1[DIGITS] = { 0 };
	int num2[DIGITS] = { 0 };
	scanNum(&number1);
	scanNum(&number2);
	//printf("num1: %s\nnum2: %s\nmode: %d", number1, number2, mode);
	scanFromString(&num1, &number1);
	scanFromString(&num2, &number2);
	switch (mode) {
	case 1:
		add(&num1, &num2);
		break;
	case 2:
		sub(&num1, &num2);
		break;
	}
	int i = DIGITS - 1;
	while (num1[i] == 0 && i > 0) i--;
	while (i >= 0) printf("%d", num1[i--]);
	return 0;
}