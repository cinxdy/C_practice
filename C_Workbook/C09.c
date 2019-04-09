//
//  main.c
//  C09
//
//  Created by 신지영 on 2018. 8. 23..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int income;
    int tax;
    
    printf("연봉을 입력하세요.   :");
    scanf("%d",&income);
    
    if(income<10000000) tax = income * 0.095;
    else if ( income <40000000) tax = income * 0.19;
    else if ( income <80000000) tax = income * 0.28;
    else tax = income * 0.37;
    
    printf("연봉 금액에 대한 소득세는 %d원입니다", tax);
    
    
}
