//
//  main.c
//  B04
//
//  Created by 신지영 on 2018. 8. 9..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    float input, output;
    
    printf("면적은 몇 제곱미터입니까?   :");
    scanf("%f",&input);
    
    output = input / 3.305;
    
    if( output < 30.0 ) printf("작은 아파트입니다\n");
    else printf("큰 아파트입니다\n");
    
    printf("평 수 : %f", output);
    
}
