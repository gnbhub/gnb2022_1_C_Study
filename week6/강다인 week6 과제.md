```c
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void func(char*str) {
	int i = 0;
	while (str[i]) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else
			str[i] = str[i];
		printf("%c", str[i]);
		i++;
	}
}
![2022-05-24](https://user-images.githubusercontent.com/102521485/170033593-3156672d-2e15-4819-b456-01c791d536c7.png)

int main()
{
	int i=0;
	printf("문자를 입력하시오.\n");
	char str[50];
	gets_s(str, sizeof(str));
	func(str);
}
```c
![2022-05-24](https://user-images.githubusercontent.com/102521485/170033614-32df12ad-3baf-4f10-ac95-0f3e28eea14b.png)

