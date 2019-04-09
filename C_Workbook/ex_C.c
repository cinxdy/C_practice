//
//  main.c
//  ex_C
//
//  Created by 신지영 on 2018. 8. 10..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int a;
    
    printf("수를 입력하세요.  :");
    scanf("%d",&a);
    
    if( a>0 ) printf("양수입니다");
    else if ( a<0 ) printf("음수입니다");
    else printf("0입니다");
    
    
    
}
