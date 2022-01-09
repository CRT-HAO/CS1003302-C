#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
/*
2
4
1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31
0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30
*/

int main()
{
	int n1,n2, t = 0,n=0;
	int m[8][8], sum[8][8] = {0};
	scanf_s("%d", &n2);
	scanf_s("%d", &n1);
	for(int l=0;l<n2;l++)
	{
		for (int i = 0; i < n1 - 1; i++)
		{
			for (int j = 0;j < n1;j++) {
				scanf_s("%d ", &m[i][j]);sum[i][j] += m[i][j];
			}
		}
		for (int j = 0;j < n1 - 1;j++) {
			scanf_s("%d ", &m[n1-1][j]);sum[n1-1][j] += m[n1-1][j];
		}
		scanf_s("%d", &m[n1 - 1][n1 - 1]);
		sum[n1 - 1][n1 - 1] += m[n1 - 1][n1 - 1];
		
	}
	n = n1;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0;j < n;j++)printf("%d ", sum[i][j]);
		printf("\n");
	}
	for (int j = 0;j < n - 1;j++)printf("%d ", sum[n - 1][j]);
	printf("%d", sum[n - 1][n - 1]);
    return 0;
}