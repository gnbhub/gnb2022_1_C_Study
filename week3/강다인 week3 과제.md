```c
#include <stdio.h>
int main(void)
{
	int n;
	scanf_s("%d", &n);
	if (n < 6) {
		printf("4\n");
		for (int i = 1; i < 5; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else if (n < 11) {
		printf("8\n");
		for (int i = 8; i > 0; i--)
		{
			for (int j = 1; j < i; j++)
				for (j = 9; j > i; j--)
				{
					printf("*");
				}
			printf("\n");

		}
	}
	else if (n < 16) {
		printf("12\n");
		for (int i = 12; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else if (n < 21) {
		printf("16\n");
		for (int i = 16; i > 0; i--)
		{
			for (int j = 17; j > i; j--) {
				printf(" ");
			}
			for (int j = 0; j < i; j++)
			{
				printf("*");
			}
			printf("\n");

		}
	}
}
```
https://1drv.ms/u/s!At3ANar7lOgBvFN8MnNkeqOYJOsx?e=XQ58aD

