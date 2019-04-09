/*
1차 함수 y=ax + b 에 대해 계수 a와 b를 입력받은 후, x값의 시작 값과 마지막 값을 입력받아 이 두 수 사이의 x 값에 대한 1차 함수의 (x, y) 좌표들을 출력하라.
반복문은 for 구문을 사용하고, 변수는 다음과 같이 사용하라.
int a, b;
int x_begin, x_end; int x, y;
// 1차 함수의 계수 a, b // x좌표의 시작 값과 끝 값 // x좌표, y좌표
*/

#include <stdio.h>

int main(){

    int a,b;
    int aboutx[2];
    int x,y;

    printf("Input a and b\n");
    scanf("%d %d",&a,&b);

    printf("Input x_bigin and x_end\n");
    scanf("%d %d",&aboutx[0],&aboutx[1]);

    for(int x=aboutx[0];x<=aboutx[1];x++){
        y = a * x + b;
        printf("(%d,%d)\n",x,y);
    }
    
    return 0;
}