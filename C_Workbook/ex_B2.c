//
//  main.c
//  ex_B2
//
//  Created by 신지영 on 2018. 8. 9..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    
    int age=0;
    char gender;
    
    printf("당신은 몇 세입니까?");
    scanf("%d",&age);
    
    printf("당신은 여자입니까 남자입니까? (여자:F,남자:M로 입력).  :");
    scanf(" %c",&gender);
    
    if(gender == 'F')
        printf("당신은 %d세의 여자입니다",age);
    
    else if(gender == 'M')
        printf("당신은 %d세의 남자입니다",age);
    
    else printf("성별을 잘못 입력하셨습니다. 다시 입력하세요");

}
