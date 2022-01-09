#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int rows;
	int matrix1[100][100];
	int matrix2[100][100];
	scanf_s("%d", &rows);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			scanf_s("%d", &matrix1[i][j]);
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			scanf_s("%d", &matrix2[i][j]);
		}
	}
	int result[100][100];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			result[i][j] = 0;
			for (int k = 0; k < rows; k++) {
				result[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			printf("%d", result[i][j]);
			if (j == rows - 1) {
				if(i != rows - 1) printf("\n");
			}
			else {
				printf(" ");
			}
		}
	}
	return 0;
}