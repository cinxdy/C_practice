//
//  main.c
//  C01
//
//  Created by 신지영 on 2018. 8. 10..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int present_year, birth_year, age ;
    
    printf("현재 몇 년도입니까?");
    scanf("%d",&present_year);
    
    printf("몇 년도에 태어났습니까?");
    scanf("%d",&birth_year);
    
    age = present_year - birth_year + 1 ;
    
    printf("당신은 ");
    switch(age){
        case  1 ... 6 : printf("유아"); break;
        case  7 ... 12 : printf("어린이"); break;
        case 13 ... 19 : printf("청소년"); break;
        case 20 ... 29 : printf("청년"); break;
        case 30 ... 59 : printf("중년"); break;
        case 60 ... 100: printf("노년"); break;
    }
    printf("입니다\n");
    
    
    printf("당신의 나이는 %d세입니다", age);
    
}
