//
//  main.c
//  A03
//
//  Created by 신지영 on 2018. 8. 8..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    float width,height,area;
    
    printf("가로 길이를 입력하세요 :");
    scanf("%f",&width);
    printf("세로 길이를 입력하세요 :");
    scanf("%f",&height);
    

    area=width*height;
    
    printf("넓이는 %.1f입니다", area);
    
}
