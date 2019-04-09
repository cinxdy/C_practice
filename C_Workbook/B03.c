//
//  main.c
//  B03
//
//  Created by 신지영 on 2018. 8. 9..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int width, height, area;
    
    printf("가로 길이를 입력하세요.  :");
    scanf("%d",&width);
    
    printf("세로 길이를 입력하세요.  :");
    scanf("%d",&height);
    
    area= width*height;
    
    if(width==height)
        printf("정사각형입니다!\n");
    
    
    printf("넓이는 %d입니다",area);
    
    
}
