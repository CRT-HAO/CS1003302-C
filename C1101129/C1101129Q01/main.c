#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <string.h>


int main()
{
	char ch;
	char text[101] = {-1};
	char* p;
	int shift;
	p = text;
	while ((ch = getchar()) != '\n' && ch != EOF) {
		*p++ = (char)ch;
	}
	*p++ = 0;
	scanf_s("%d", &shift);
	shift %= 26;
	char* i = &text[0];
	while (*i) {
		if (*i >= 'A' && *i <= 'Z') {
			*i += shift;
			if(*i > 'Z') *i = (*i) - 'Z' + 'A' - 1;
		}else if (*i >= 'a' && *i <= 'z') {
			*i += shift;
			if(*i > 'z') *i = (*i) - 'z' + 'a' - 1;
		}
		*i++;
	}
	printf("%s", text);
	return 0;
}