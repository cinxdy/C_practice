/*
행의 크기(rows)와 열의 크기(columns)를 입력받은 후에, 이 크기만큼의 바둑판 모양의 2차원 공간의 각 칸마다 행 번호(1, 2, ..., width)와 열 번호(1, 2, ..., height)를 곱한 값을 출력하라. (아래 그림 참고) 변수는 다음과 같이 사용하라.
int rows, columns;
int number; int i, j;
// 행의 개수, 열의 개수
// 각 칸에 출력하는 값
// 반복문 사용을 위한 변수
*/
#include<stdio.h>

int main(){
    int rows, columns;
    int number;
    int i,j;

    printf("Input rows and columns\n");
    scanf("%d %d",&rows,&columns);

    for(i=1;i<=rows;i++){
        for(j=1;j<=columns;j++){
            printf("%2d ",i*j);
        }
        printf("\n");
    }

}