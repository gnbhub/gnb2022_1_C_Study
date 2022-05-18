1.
```c
#include <stdio.h>

void main()
{
	//수 입력받아 배열에 저장
	int a[5];
	printf("5개의 수를 입력하세요 : ");
	scanf_s("%d %d %d %d %d", a, a+1, a+2, a+3, a+4);

	//오름차순 정렬 : 버블 정렬
	int i, j, temp;
	for(i=4; i>0; i--){
	    for(j=0; j<i; j++){
	        if(a[j]>a[j+1]){
	            temp = a[j];
	            a[j] = a[j+1];
	            a[j+1] = temp;
	        }
	    }
	}

	//결과 출력
	printf("정렬 결과 : ");
	for(i=0; i<5; i++){
	    printf("%d ", a[i]);
	}
	
	return 0;
}
```

2.
```c
#include <stdio.h>

void main()
{
    	//단어 입력받아 배열에 저장
	char w[30];
	printf("단어를 입력하세요 : ");
	scanf_s("%s", w);
	
	//'\0' 위치 찾기
	int i, cnt = -1;
	for(i=0; w[i]!='\0'; i++){
	    cnt += 1;
	}

	//역순 출력
	for(i=cnt; i>=0; i--){
	    printf("%c", w[i]);
	}
	
	return 0;
}
```

3.
```c
#include <stdio.h>

void main()
{
    //성적 입력받아 배열에 저장
	int score[3][2];
	int i;
	for(i=0; i<3; i++){
	    printf("학생 %c의 국어, 영어 성적 : ", 65+i);
	    scanf_s("%d %d", &score[i][0], &score[i][1]);
	}
	
	//합 출력
	for(i=0; i<3; i++){
	    printf("%c : %d\n", 65+i, score[i][0]+score[i][1]);
	}
	
	return 0;
}
```
