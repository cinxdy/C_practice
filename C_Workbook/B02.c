//
//  main.c
//  B02
//
//  Created by 신지영 on 2018. 8. 9..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int input_degree, output_degree;
    char kind;
    
    printf("어떤 온도로 변환할 것인지 입력하세요 (화씨:F, 섭씨:C)   :");
    scanf(" %c",&kind);
    
    
    while(1){
        
    if( kind == 'F'){
        printf("섭씨 온도를 입력하세요.  :");
        scanf("%d",&input_degree);
        output_degree = input_degree * 1.8 + 32;
        printf("화씨 온도는 %dF입니다\n",output_degree);
        
        break;
    }
    
    
    else if( kind=='C'){
        printf("화씨 온도를 입력하세요   :");
        scanf("%d",&input_degree);
        output_degree = (input_degree-32)/1.8;
        printf("섭씨 온도는 %dC입니다\n",output_degree);
        
        break;
    }
    
    printf("F와 C 중에서 입력하세요.   :");
    scanf(" %c",&kind);
    
    }
}
