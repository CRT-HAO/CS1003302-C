#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
//1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31
//0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30
int main()
{
	int n,t=0,temp=0;
	scanf_s("%d", &n);
	int a[8][8], b[8][8],m[8][8];
	for (int i = 0; i < n-1; i++) 
	{
		for (int j = 0;j < n;j++)scanf_s("%d ", &a[i][j]);
	}
	for (int j = 0;j < n-1;j++)scanf_s("%d ", &a[n-1][j]);
	scanf_s("%d", &a[n-1][n-1]);
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0;j < n;j++)scanf_s("%d ", &b[i][j]);
	}
	for (int j = 0;j < n - 1;j++)scanf_s("%d ", &b[n-1][j]);
	scanf_s("%d", &b[n-1][n-1]);
	for (int i = 0;i < n;i++) 
	{
		for (int j = 0;j < n;j++) 
		{ 
			for (int k = 0;k < n;k++) { temp += (a[i][k] * b[k][j]); } 
			m[i][j] = temp;
			temp = 0;
		}
		
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0;j < n;j++)printf("%d ",m[i][j]);
		printf("\n");
	}
	for (int j = 0;j < n - 1;j++)printf("%d ", m[n-1][j]);
	printf("%d", m[n-1][n-1]);
	
		
	
    return 0;
}