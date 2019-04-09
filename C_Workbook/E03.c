#include <stdio.h>

int main(){

    int height=0;
    int i=0,j=0;
    int blank=0;
    int star=0;

    printf("직각 삼각형의 높이를 입력하시오. ");
    scanf("%d",&height);

    blank = height;
    star = 1;
    for(i=1;i<=height;i++){
        for(j=1;j<=blank;j++){
            printf(" ");
        }
        for(j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");


        blank--;
        star+=2;
    }

    return 0;
}