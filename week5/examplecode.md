1.
```c
#include <stdio.h>
#define PI 3.141592

double circlearea(double r){
    double a;
    a = r*r*PI;
    return a;
}

double circumference(double r){
    double l;
    l = 2*PI*r;
}

void main()
{
	double r;
	printf("반지름? ");
	scanf("%lf", &r);
	printf("원의 넓이 : %.2lf\n", circlearea(r));
	printf("원의 둘레 : %.2lf\n", circumference(r));
	
	return 0;
}
```

2.
```c
#include <stdio.h>

void factorize(int num){
    int r[100];
    int i, cnt = 0;
    int n = num;
    for(i=2; i<=num; i++){
        if(num%i==0){
            r[cnt] = i;
            cnt ++;
            num = num / i;
            i=1;
        }
    }
    for(i=0; i<=cnt-1; i++){
        if (i == 0) printf("%d", r[i]);
        else printf(" x %d", r[i]);
    }
}

void main()
{
	int n;
	printf("수를 입력해 주세요 : ");
	scanf("%d", &n);
	printf("출력 결과 : ");
	factorize(n);
}
```
