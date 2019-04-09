//
//  main.c
//  C08
//
//  Created by 신지영 on 2018. 8. 23..
//  Copyright © 2018년 신지영. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2,num3;
    
    printf("첫번째 숫자를 입력하세요.  :");
    scanf("%d",&num1);
    printf("두번째 숫자를 입력하세요.  :");
    scanf("%d",&num2);
    printf("세번째 숫자를 입력하세요.  :");
    scanf("%d",&num3);
    
    printf("가장 큰 수는 ");
    if( num1>=num2 && num1>=3) printf("%d",num1);
    else if ( num2>=num1 && num2>=num3)  printf("%d",num2);
    else printf("%d",num3);
    printf("이고, 가장 작은 수는 ");
    
    if( num1<=num2 && num1<=3) printf("%d",num1);
    else if ( num2<=num1 && num2<=num3)  printf("%d",num2);
    else printf("%d",num3);
    
    printf("이다.");
    
    
}
