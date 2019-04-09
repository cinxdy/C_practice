/*
출력모드(홀수 또는 짝수)를 입력받아 이에 따라 홀수 단 또는 짝수 단의 구구단 만을 1줄에 3개씩 출력하 라. 단, 출력모드 입력 내용이 1이면 홀수단, 2이면 짝수단으로 결정하도록 한다.
변수는 다음과 같이 사용하라.
int mode; // 출력모드(1: 홀수단, 2: 짝수단)
int i, j; // 반복문 사용을 위한 변수
*/

#include <stdio.h>

int main(){

    int mode;
    int i,j;

    printf("홀수(1) 또는 짝수(2) 입력\n");
    scanf("%d",&mode);

    for(i=1;i<10;i++){
        if(i%2 == mode || i%2 == mode-2){
            for(j=1;j<10;j++){
                printf("%2d X %2d = %2d   ",i,j,i*j);
                if(j%3==0) printf("\n");
            }
        
        }
        printf("\n");
    }

}