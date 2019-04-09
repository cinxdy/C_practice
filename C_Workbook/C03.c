//
//  main.c
//  C03
//
//  Created by 신지영 on 2018. 8. 10..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int width, height;
    
    printf("가로와 세로 길이를 입력하세요 (띄어쓰기로 구분)   :");
    scanf("%d %d",&width,&height);
    
    if(width==height) printf("정사각형입니다");
    else if(width>height){
        if(width >=2 *height) printf("좌우로 길쭉한 직사각형입니다");
        else printf("일반적인 가로형 직사각형입니다");
        }
    else {
        if(width <= 2*height) printf("세로로 길쭉한 직사각형입니다");
        else printf("일반적인 세로형 직사각형입니다");
    }
}
