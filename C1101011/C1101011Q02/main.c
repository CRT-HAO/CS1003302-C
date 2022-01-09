#include <stdio.h>

int main()
{
	int matrix0[2][2];
	int matrix1[2][2];

	scanf_s("%d%d%d%d", &matrix0[0][0], &matrix0[0][1], &matrix0[1][0], &matrix0[1][1]);
	scanf_s("%d%d%d%d", &matrix1[0][0], &matrix1[0][1], &matrix1[1][0], &matrix1[1][1]);
	printf(
		"%d %d\n%d %d",
		matrix0[0][0] * matrix1[0][0] + matrix0[0][1] * matrix1[1][0],
		matrix0[0][0] * matrix1[0][1] + matrix0[0][1] * matrix1[1][1],
		matrix0[1][0] * matrix1[0][0] + matrix0[1][1] * matrix1[1][0],
		matrix0[1][0] * matrix1[0][1] + matrix0[1][1] * matrix1[1][1]
		);
}