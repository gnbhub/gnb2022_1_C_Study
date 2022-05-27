#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void upperchar(char *str) {
  while (*str) {
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		printf("%c", *str++);
	}
}

int main()
{
	printf("문자를 입력하시오.\n");
	char str[50];
	gets_s(str, sizeof(str));
	upperchar(str);
}
