//
//  main.c
//  A01
//
//  Created by 신지영 on 2018. 8. 8..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int birth_year, present_year, age;
    
    printf("현재 년도를 입력하세요 : ");
    scanf("%4d",&present_year);
    
    printf("생일의 년도를 입력하세요 : ");
    scanf("%4d",&birth_year);
    
    age = present_year - birth_year +1 ;
    
    printf("당신의 나이는 %d세 입니다",age);
    
}

