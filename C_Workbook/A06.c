//
//  main.c
//  A06
//
//  Created by 신지영 on 2018. 8. 9..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(){
    int kor,eng,math;
    int total;
    
    printf("국어 점수를 입력하세요   :");
    scanf("%d",&kor);
    printf("영어 점수를 입력하세요   :");
    scanf("%d",&eng);
    printf("수학 점수를 입력하세요   :");
    scanf("%d",&math);
    
    total=kor+eng+math;
    
    float average=total/3;
    
    printf("국어, 영어, 수학의 평균 점수는 %.2f점 입니다.",average );
    
}
