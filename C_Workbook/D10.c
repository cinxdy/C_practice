/*

숫자 2개를 입력받은 후, 1부터 100까지의 숫자 중에 이 두 숫자 중 하나의 숫자에 대해서만 배수인 수를 모두 출력하라. 즉, 두 숫자의 공통 배수인 숫자는 출력하지 않아야 한다.
예를 들어 15와 20을 입력하게 되면 "15, 20, 30, 40, 45, 75, 80, 90, 100"이 출력된다. 반복문은 for 구문을 사용하고, 변수는 다음과 같이 사용하라.
int num1, num2; // 입력받은 두 수
int i; // 반복문을 위한 변수

*/

#include <stdio.h>

int main(){

    int num1,num2;
    int i;
    
    printf("Input num1 and num2\n");
    scanf("%d %d",&num1,&num2);

    for(i=1;i<=100;i++){
        if((i%num1==0 || i%num2==0) && !(i%num1==0 && i%num2==0))
            printf("%d ",i);
    }

    return 0;
}

