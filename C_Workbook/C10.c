//
//  main.c
//  C10
//
//  Created by 신지영 on 2018. 8. 23..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2;
    char operator;
    int result;
    
    printf("숫자1을 입력하세요.  :");
    scanf("%d",&num1);
    printf("연산을 입력하세요.  :");
    scanf(" %c",&operator);
    printf("숫자2를 입력하세요.  :");
    scanf("%d",&num2);
    
    if(operator == '+') result = num1 + num2;
    else if(operator == '-') result = num1 - num2;
    else if(operator == '*') result = num1 * num2;
    else if(operator == '/') result = num1/num2;
    
    printf("계산 결과는 %d입니다",result);
    
    
    
}
