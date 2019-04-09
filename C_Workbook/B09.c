//
//  main.c
//  B09
//
//  Created by 신지영 on 2018. 8. 10..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    float height, weight, bmi,healthweight;
    
    printf("키(cm)를 입력하세요.   :");
    scanf("%f",&height);
    printf("몸무게(kg)를 입력하세요.   :");
    scanf("%f",&weight);
    
    bmi = weight / ( height*height /10000) ;
    healthweight = height*height/10000 * 23.0;

    if( bmi > 25.0 ){
        printf( "비만입니다\n" );
        printf("권장 몸무게는 %.2fkg입니다", healthweight);
    }
    
    else printf("비만이 아닙니다");
    
    
    
}
