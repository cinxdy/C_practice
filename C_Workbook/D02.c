#include <stdio.h>

int main(){
    int number=0; // 입력받은 수
    int max_num=0, min_num=0; // 가장 큰 숫자, 가장 작은 숫자

    do{
    printf("input number:");
    scanf("%d",&number);
    if(number>max_num && number<100) max_num=number;
    if(number<min_num && number>0) min_num=number;
    }while(0<number && number<100);

    printf("max = %d, min = %d", max_num,min_num);

}
