#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>

bool isUgly(int num) {
	if (num <= 0) return false;
	while ((num % 2) <= 0) num /= 2;
	while ((num % 3) <= 0) num /= 3;
	while ((num % 5) <= 0) num /= 5;
	return num == 1;
}

int main() {
	int num;
	scanf("%d", &num);
	if (isUgly(num)) {
		printf("It is an ugly number.");
	}
	else {
		printf("It is not an ugly number.");

	}
	return 0;
}