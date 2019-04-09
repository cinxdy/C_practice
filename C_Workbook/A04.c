//
//  main.c
//  A04
//
//  Created by 신지영 on 2018. 8. 8..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    float m2_area,pyeong_area;
    
    char morp;
    printf("구하려는 단위는 제곱미터입니까 평입니까? m 또는 p 중에서 입력하세요");
    scanf("%c",&morp);
  
    while(1){
        
        if(morp == 'p'){
        
            printf("면적은 몇 제곱미터입니까? :");
            scanf("%f",&m2_area);
            pyeong_area = m2_area/3.305;
            printf("면적은 %f평입니다",pyeong_area);
            break;
        }
    
        else if(morp == 'm'){
            
            printf("면적은 몇 평입니까? :");
            scanf("%f",&pyeong_area);
            m2_area = pyeong_area * 3.305;
            printf("면적은 %f제곱미터입니다",m2_area);
            break;
        }
    
    
            printf("m 또는 p 중에서 입력하세요");
            scanf(" %c",&morp);
    
    }
    
}
