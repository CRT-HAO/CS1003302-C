#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	char num_str[31];
	scanf_s("%s", &num_str, 30);
	unsigned long odd_sum = 0, even_sum = 0;
	for (int i = 0; i < 30; i++) {
		if (num_str[i] == 0) break;
		if ((i + 1) % 2 == 0) {
			odd_sum += num_str[i] - '0';
		}
		else {
			even_sum += num_str[i] - '0';
		}
	}
	unsigned long diff = odd_sum - even_sum;
	if (diff % 11 == 0) {
		printf("%s ia a mutiple of 11.", num_str);
	}
	else {
		printf("%s is not a mutiple of 11.", num_str);
	}
	return 0;
}