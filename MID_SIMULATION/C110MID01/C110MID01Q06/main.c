#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
//112233 is a multiple of 11.

int main()
{
	char a[1000];
	int odd = 0, even = 0,t=0;
	scanf("%s", a);
	while (t < strlen(a)) { odd += a[t];t += 2; }
	t = 1;
	while (t < strlen(a)) { even += a[t];t += 2; }
	if ((even - odd) % 11 == 0) printf("%s is a multiple of 11.", a);
	else printf("%s is not a multiple of 11.", a);
    return 0;
}