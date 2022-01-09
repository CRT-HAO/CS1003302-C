#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int matries_num, rows;
	int matrix[100][100];
	scanf_s("%d", &matries_num);
	scanf_s("%d", &rows);
	for (int i = 0; i < matries_num; i++) {
		for (int j = 0; j < (rows * rows); j++) {
			scanf_s("%d", &matrix[i][j]);
		}
	}
	// sum
	int sum[100];
	for (int i = 0; i < 100; i++) sum[i] = 0;
	for (int i = 0; i < matries_num; i++) {
		for (int j = 0; j < (rows * rows); j++) {
			sum[j] += matrix[i][j];
		}
	}
	for (int i = 0; i < (rows * rows); i++) {
		printf("%d", sum[i]);
		if ((i + 1) % rows == 0 && i != (rows * rows) - 1) {
			printf("\n");
		}
		else {
			printf(" ");
		}
	}
	return 0;
}