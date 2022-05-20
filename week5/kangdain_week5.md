```c
#include <stdio.h>

float area(float r);
float volume(float r);
int main(void)
{
	float r, a, b;
	printf("반지름을 입력해 주세요:");
	scanf_s("%f", &r);
	a=area(r);
	b = volume(r);
	printf("넚이: %.3f", a);
	printf("둘레: %.2f", b);

	return 0;
}
float area(float r)
{
	float result;
	result = r * r * 3.14;
	return result;
}
float volume(float r)
{
	float x;
	x = 2 * 3.14 * r;
	return x;
}
```
"C:\Users\kang6\OneDrive\사진\스크린샷\2022-05-20.png"v
```c
#include <stdio.h>

int solve(int n);
int main(void)
{
	int n;
	int value;
	printf("숫자를 입력하시오\n");
	scanf_s("%d", &n);
	value = solve(n);
	return 0;
}
int solve(int n)
{
	char result;
	int i;
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
			printf("%d *", i);
		}
	}
	return result;
}
```
https://1drv.ms/u/s!At3ANar7lOgBvG13hDMZQdhkRSLd?e=3j2NHj
https://1drv.ms/u/s!At3ANar7lOgBvG5L6ZCRQRazrGJh?e=3qLxV7
경고 문구에 초기화되지 않은 메모리 result을 사용하고 있습니다가 뜹니다.
