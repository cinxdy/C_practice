/*
2차함수y=ax2 +bx+c에대해계수a와b와c를입력받은후,x값의시작값과마지막값을입력받 아 이 두 수 사이의 x값에 대한 2차 함수의 (x, y) 좌표들을 출력하라.
반복문은 for 구문을 사용하고, 변수는 다음과 같이 사용하라.
int a, b, c;
int x_begin, x_end; int x, y;
// 2차 함수의 계수 a, b, c // x좌표의 시작 값과 끝 값 // x좌표, y좌표
*/

#include <stdio.h>

int main(){

    int a,b,c;
    int aboutx[2];
    int x, y;

    printf("Input a,b and c\n");
    scanf("%d %d %d",&a,&b,&c);

    printf("Input x_bigin and x_end\n");
    scanf("%d %d",&aboutx[0],&aboutx[1]);

    for(int x=aboutx[0];x<=aboutx[1];x++){
        y = a * x * x + b * x + c;
        printf("(%d,%d)\n",x,y);
    }
}