/*
2부터 9 사이의 숫자를 입력받아 이 숫자에 해당하는 구구단을 출력하라. 단, 2부터 9 사이의 숫자가 아닌 수를 입력하면 "잘못 입력하였습니다."라고 출력하고 바르게 입력할 때까지 다시 입력을 받도록 하라. 반복문은 적당하게 선택하고, 변수는 다음과 같이 사용하라.
int dan; // 출력하려는 구구단의 단 수
int i; // 반복문을 위한 변수
*/

#include <stdio.h>

int main(){

    int dan;
    int i;

    while(1){
        printf("Input a number of dan \n");
        scanf("%d",&dan);

        if(dan<2 || dan>9) printf("wrong number of dan!\n");
        else break;
    }

    for(i=1;i<=9;i++){
        printf("%d X %d = %d\n",dan,i,dan*i);
    }

    return 0;
}