//
//  main.c
//  C02
//
//  Created by 신지영 on 2018. 8. 10..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int degree ;
    
    printf("물의 온도를 입력하세요 ");
    scanf("%d",&degree);
    
    if( degree <= 0 ) printf("값을 잘못 입력하셨습니다");
    else if( degree <25 ) printf("미온수입니다");
    else if( degree <40 ) printf("냉수입니다");
    else if( degree <80 ) printf("온수입니다");
    else printf("끓는 물입니다");
    
    
}
