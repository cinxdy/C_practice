//
//  main.c
//  ex_A
//
//  Created by 신지영 on 2018. 8. 8..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int apple_count, unit_price, price;
    
    printf("사과 한 개는 얼마입니까?\n");
    scanf("%d", &unit_price);
    printf("사과는 몇 개 입니까?\n");
    scanf("%d", &apple_count);
    
    price = unit_price * apple_count;
    
    printf("사과는 개당 %d원이고 %d개 구매하셔서 총 가격은 %d원입니다",unit_price,apple_count,price );
    
}
