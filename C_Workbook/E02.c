#include <stdio.h>

int main(){

    int height=0;
    int blank=0;
    int i=0,j=0;

    printf("직각 삼각형의 높이와 왼쪽 여백의 크기를 입력하시오. ");
    scanf("%d",&height);
    scanf("%d",&blank);

    for(i=1;i<=height;i++){
        for(j=1;j<=blank;j++){
            printf(" ");
        }
        for(j=1;j<=height-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}