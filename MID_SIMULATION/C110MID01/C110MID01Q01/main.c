#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int n = 0;
	char c = '*';
	scanf_s("%d",&n);
	if (n < 2||n > 20) { printf("Invalid input"); return 0; }
	for (int i = 0; i < n - 1; i++) 
	{
		for (int j = 0; j < i; j++) { printf(" "); }
		for (int k = 0; k < 2*(n -i)-1; k++) { printf("%c", c); }
		printf("\n");
	}
	for (int j = 0; j < n-1; j++) { printf(" "); }
	printf("%c\n", c);
	for (int i = n-1; i > 0; i--)
	{
		for (int j = i-1; j >0; j--) { printf(" "); }
		for (int k = 2 * (n - i) +1; k > 0; k--) { printf("%c", c); }
		printf("\n");
	}
    return 0;
}