//
//  main.c
//  B08
//
//  Created by 신지영 on 2018. 8. 10..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int a,b,c;
    
    printf("세 정수를 입력하세요 (띄어쓰기로 구분).  :");
    scanf("%d %d %d",&a,&b,&c);
    
    if( a==b || b==c || a==c) printf("1번 조건 충족 : 적어도 두 수의 값이 같다\n");
    if( (a>50&&b>50) || (b>50&&c>50) || (a>50&&c>50)) printf("2번 조건 충족 : 적어도 두 수 값이 50보다 크다\n");
    if( (a+b==c) || (b+c==a) || (a+c==b) ) printf("3번 조건 충족 : 두 수의 합이 나머지 수과 같다\n");
    if( (a%b==0 || a%c==0 || b%a==0 || b%c==0 || c%a==0 || c%b ==0))  printf("4번 조건 충족 : 하나의 수로 나누면 나누어떨어지는 경우가 있다\n");
       
       
}
