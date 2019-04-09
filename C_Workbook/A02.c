//
//  main.c
//  A02
//
//  Created by 신지영 on 2018. 8. 8..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    
    float c_degree, f_degree;
    
    printf("현재 온도는 몇 도씨 입니까?");
    scanf("%f",&c_degree);
    
    f_degree = c_degree * 1.8 +32;
    
    printf("현재 온도는 %f 화씨 입니다",f_degree);
    
}
