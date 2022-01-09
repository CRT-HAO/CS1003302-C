#include <stdio.h>

int main()
{
	int matrix0_0, matrix0_1, matrix0_2, matrix0_3;
	int matrix1_0, matrix1_1, matrix1_2, matrix1_3;

	scanf_s("%d%d%d%d", &matrix0_0, &matrix0_1, &matrix0_2, &matrix0_3);
	scanf_s("%d%d%d%d", &matrix1_0, &matrix1_1, &matrix1_2, &matrix1_3);
	printf("%d %d\n%d %d", matrix0_0 + matrix1_0, matrix0_1 + matrix1_1, matrix0_2 + matrix1_2, matrix0_3 + matrix1_3);
}