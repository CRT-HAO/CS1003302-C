#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdbool.h>

int main() {
	int num[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num[i]);
	}
	int repeat[10];
	int n = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (num[i] == num[j] && i != j) {
				bool repeated = false;
				for (int k = 0; k < n; k++) {
					if (num[i] == repeat[k]) {
						repeated = true;
						break;
					}
				}
				if (!repeated) {
					repeat[n] = num[i];
					n++;
					break;
				}
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += repeat[i];
	}
	printf("%d", sum);
	return 0;
}