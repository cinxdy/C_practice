//
//  main.c
//  B06
//
//  Created by 신지영 on 2018. 8. 10..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int kor,eng,math;
    
    printf("국어 점수를 입력하세요.  :");
    scanf("%d",&kor);
    printf("영어 점수를 입력하세요.  :");
    scanf("%d",&eng);
    printf("수학 점수를 입력하세요.  :");
    scanf("%d",&math);
    
    float average = ( kor+eng+math ) / 3;
    
    if( average >= 90.0 ) printf("성적 우수 학생입니다\n");
    
    printf("성적 평균은 %f점입니다",average);
    
}
