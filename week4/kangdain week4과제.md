```c
#include <stdio.h>
#define MIN_SIZE 5

void bubble_sort(int list[], int n) {
	int i, j, temp;
	for (i = n -1; i >0; i--) {
		for (j = 0; j <i; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1]=temp;
			}
		}
	}
}
void main() {
	int i;
	int n = MIN_SIZE;
	int list[5] = { 3,56,7,1,99};
	bubble_sort(list, n);
	for (i = 0; i < n; i++) {
		printf("%d\n", list[i]);
	}
}
```
https://1drv.ms/u/s!At3ANar7lOgBvFFPyOQGYYyRHXuh?e=3LGq9H
```c
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int i;
	char str[5] = { 'a','p','p','l','e','\0'};
	for(i = 5; i > 0; i-- ) {
		printf("%s", str[i]);
	}
}
```
실패한 코드...
```c
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int i,j;
	int sum;
	int arr[3][2] = {
		{90,90},
		{60,95},
		{50,50}
	};
	for (i = 0; i < 3; i++)
	{
		sum = 0;
		for (j = 0; j < 2; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}
}
```
https://1drv.ms/u/s!At3ANar7lOgBvFLwzoUf-Yoch6hK?e=tn31dG
