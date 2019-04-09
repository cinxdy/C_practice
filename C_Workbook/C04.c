//
//  main.c
//  C04
//
//  Created by 신지영 on 2018. 8. 10..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float area_m, area_p;
    
    printf("아파트 면적을 제곱미터 단위로 입력하세요.  :");
    scanf("%f",&area_m);
    
    area_p = area_m / 3.305 ;
    
    printf("면적은 %.1f평입니다\n",area_p);
    
    if( area_p < 15 ) printf("소형");
    else if ( area_p < 30 ) printf("중소형");
    else if ( area_p < 50 ) printf("중형");
    else printf("대형");
    printf(" 아파트 입니다");
    
}
