/* 반복해서 직사각형의 가로크기와 세로크기를 입력받으면서 이 값을 이용하여 직사각형의 모양을 판정하여 각각의 종류별로 몇 개가 입력되었는지 결과를 출력하라. 가로 크기와 세로 크기 중 하나라도 0이하의 값이 입력되면 반복을 중단한다.
단, 평가 기준은 다음과 같다.
가로 크기와 세로크기가 동일 : "정사각형"
가로 크기가 세로크기의 2배 이상 : "좌우로 길쭉한 직사각형"
세로 크기가 가로크기의 2배 이상 : "위아래로 길쭉한 직사각형"
가로 크기가 세로크기보다 크면 : "일반적인 가로형 직사각형"
세로 크기가 가로크기보다 크면 : "일반적인 세로형 직사각형" 
반복은 do ~ while 구문을 사용하고, 변수는 다음과 같이 사용하라.
int width, height; int count1;
int count2;
int count3;
int count4; 
int count5;
// 가로크기, 세로크기
// "정사각형"의 개수 // "좌우로 길쭉한 직사각형"의 개수 // "위아래로 길쭉한 직사각형"의 개수 // "일반적인 가로형 직사각형"의 개수 // "일반적인 세로형 직사각형"의 개수

*/

#include <stdio.h>

int main(){

    int width=0, height=0;

    int count[5]={0};
    
    do{
        printf("Input width and height\n");
        scanf("%d %d",&width,&height);
    
        if(width>0 && height>0){
            if(width==height) count[0]++;
            else if(width>=2*height) count[1]++;
            else if(height>=2*width) count[2]++;
            else if(width>height) count[3]++;
            else if(height>width) count[4]++;
        }
        
    } while(width>0 && height >0);

    printf("정사각형의 개수 = %d\n",count[0]);
    printf("좌우로 길쭉한 직사각형의 개수 = %d\n",count[1]);
    printf("위아래로 길쭉한 직사각형의 개수 = %d\n",count[2]);
    printf("일반적인 가로형 직사각형의 개수 = %d\n",count[3]);
    printf("일반적인 세로형 직사각형의 개수 = %d\n",count[4]);

    return 0;
}