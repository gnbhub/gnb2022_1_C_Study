정수형 과 switch 로 사칙연산 하기
```c
#include <stdio.h>
int main(void)
{
	int num1, num2;
	char arithmetic; //char 문자형 값을 처리하기 위한 변수

	printf("숫자 2개와 연산자를 입력하시요");

	printf("연산자는 아래와 같습니다.\n");
	printf("더하기 : +, 빼기 : -, 곱하기 : *, 나누기 : /\n");
	printf("입력 순서 : 정수1 연산자 정수2\n\n");
	scanf("%d %c %d", &num1, &arithmetic, &num2);

	switch (arithmetic)//(조건식)-->반드시 수식이나 값을 넣어야 함. 
	{
	case '+'://상숫값
		printf("%d %c %d = %d\n", num1, arithmetic, num2, num1 + num2);//명령문 블록 
		break; //switch~case문에서는 break문을 사용하여 선택된 case에 해당하는 것만 실행

	case '-':
		printf("%d %c %d = %d\n", num1, arithmetic, num2, num1 - num2);
		break;
	
	case '*':
		printf("%d %c %d = %d\n", num1, arithmetic, num2, num1 * num2);
		break;
	
	case '/':
		printf("%d %c %d = %d\n", num1, arithmetic, num2, num1 / num2);
		break;

	default:
		printf("연산자를 잘못 선택하셨습니다.");
		break;


	}

	return 0;
}
```
![화면 캡처 2022-04-03 193008](https://user-images.githubusercontent.com/101636072/161423455-39005662-a60e-482c-9d11-196df60dc7a4.png)


실수형 과 if 로 사칙연산 하기
```c
#include <stdio.h>
int main(void)
{
	float num1, num2;
	char arithmetic; //char 문자형 값을 처리하기 위한 변수

	printf("실수 2개와 연산자를 입력하시요");

	printf("연산자는 아래와 같습니다.\n");
	printf("더하기 : +, 빼기 : -, 곱하기 : *, 나누기 : /\n");
	printf("입력 순서 : 정수1 연산자 정수2\n\n");
	scanf("%f %c %f", &num1, &arithmetic, &num2);

	if (arithmetic == '+')
		printf("%f %c %f = 더한값은 %f입니다. \n", num1, arithmetic, num2, num1 + num2);

	else if (arithmetic == '-')
			printf("%f %c %f = 뺀값은 %f입니다. \n", num1, arithmetic, num2, num1 - num2);

	else if (arithmetic == '*')
			printf("%f %c %f = 곱한값은 %f입니다. \n", num1, arithmetic, num2, num1 * num2);

	else if (arithmetic == '/')
			printf("%f %c %f = 나눈값은 %f입니다. \n", num1, arithmetic, num2, num1 / num2);

	else
			printf("연산자 또는 실수형 숫자가 맞는지 다시 확인해주세요.\n");

	return 0;
}
```
![image](https://user-images.githubusercontent.com/101636072/161423511-f3f7a95d-2d8a-47fa-9133-3b58b6792706.png)


값만 바로 나오게
```c
#include <stdio.h>
int main(void)
{
	float num1, num2;
	char arithmetic; //char 문자형 값을 처리하기 위한 변수

	printf("|실수 2개와 연산자를 입력하시요              |\n");

	printf("|연산자는 아래와 같습니다.                   |\n");
	printf("|더하기 : +, 빼기 : -, 곱하기 : *, 나누기 : /|\n");
	printf("|입력 순서 : 정수1 연산자 정수2              |\n\n");
	scanf("%f %c %f", &num1, &arithmetic, &num2);

	if (arithmetic == '+')
		printf("더한 값은 %f입니다.\n", num1 + num2);

	else if (arithmetic == '-')
		printf("뺀 값은 %f입니다.\n", num1 - num2);

	else if (arithmetic == '*')
		printf("곱한 값은 %f입니다.\n", num1 * num2);

	else if (arithmetic == '/')
		printf("나눈 값은 %f입니다.\n", num1 / num2);

	else
		printf("연산자 또는 실수형 숫자가 맞는지 다시 확인해주세요.\n");

	return 0;
}
```
![image](https://user-images.githubusercontent.com/101636072/161423572-b370e2cc-1f88-404b-bc1b-b79c74935126.png)
