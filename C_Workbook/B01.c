//
//  main.c
//  B01
//
//  Created by 신지영 on 2018. 8. 9..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int present_year, birth_year, age;
    
    printf("현재 년도를 입력하세요.  :");
    scanf("%d",&present_year);
    
    printf("태어난 년도를 입력하세요.  :");
    scanf("%d", &birth_year);
    
    age = present_year - birth_year + 1;
    
    if(age<20) printf("당신은 %d세의 미성년자입니다",age);
    else printf("당신은 %d세입니다",age);
                
            
}
