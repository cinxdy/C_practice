/*
출력모드(홀수 또는 짝수)와 열 갯수를 입력받아 이에 따라 홀수 단 또는 짝수 단의 구구단만을 1줄에 열 개수만큼씩 출력하라. 단, 출력모드 입력 내용이 1이면 홀수단, 2이면 짝수단으로 결정하도록 한다. 변수는 다음과 같이 사용하라.
int mode; int column; int i, j;
// 출력모드(1: 홀수단, 2: 짝수단) // 열 개수
// 반복문 사용을 위한 변수
*/

#include<stdio.h>

int main(){
    int mode;
    int column;
    int i,j;

    printf("홀수(1) 또는 짝수(2) 입력\n");
    scanf("%d",&mode);

    printf("한 줄에 입력할 식 수\n");
    scanf("%d",&column);

    for(i=1;i<10;i++){
        if(i%2 == mode || i%2 == mode-2){
            for(j=1;j<10;j++){
                printf("%2d X %2d = %2d   ",i,j,i*j);
                if(j%column==0) printf("\n");
            }
        
        }
        printf("\n");
    }


}