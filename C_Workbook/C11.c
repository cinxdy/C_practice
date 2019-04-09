//
//  main.c
//  C11
//
//  Created by 신지영 on 2018. 8. 23..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year;
    
    printf("년도를 입력하세요.  :");
    scanf("%d",&year);
    
    if((year%4==0 && year%100!=0) || (year%400==0)) printf("입력하신 년도는 윤년입니다");
    else printf("입력하신 년도는 윤년이 아닙니다");
    
}
