#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d",&n);
	while (n % 2 == 0) { n /= 2; }
	while (n % 3 == 0) { n /= 3; }
	while (n % 5 == 0) { n /= 5; }
	if (n == 1)  puts("It is an ugly number."); 
	else puts("It is not an ugly number.");
    return 0;
}