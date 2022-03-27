//2022113020 김새웅

#include <stdio.h>
int main(void)
{
	int age = 0;
	
	printf("양의 정수를 입력하시오 :");
		scanf_s("%d", &age);
	printf("|number      |decimal     |octal       |hexadecimal |\n");
	printf("|%-12d|%-12d|%-12o|%-12x|", age, age, age, age);


	return 0;
}

