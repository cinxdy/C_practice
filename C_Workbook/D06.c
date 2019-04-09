/*
아파트 10채의 분양 면적을 제곱미터(m2) 단위로 입력받아 이 값을 평형 단위의 값으로 변환하여 평형 수 에 따라 아파트의 종류를 구분하여 종류별로 개수를 센 후, 그 결과를 출력하라.
단, 평형 수 = 제곱미터 / 3.305 로 계산하고, 크기에 따른 아파트 종류는 다음과 같이 판정한다.
15평 미만 : 소형
15평 이상 ~ 30평 미만 : 중소형
30평 이상 ~ 50평 미만 : 중형
50평 이상 : 대형
반복문은 for 구문을 사용하고, 변수는 다음과 같이 사용하라.
float m2_area; float pyung_area; int count1;
int count2;
int count3;
int count4;
int i;
// 면적 (제곱미터) // 면적 (평수) //소형아파트개수 // 중소형 아파트 개수 //중형아파트개수 //대형아파트개수 // 반복문을 위한 변수
*/

#include <stdio.h>

int main(){
    float m2_area; 
    float pyung_area; 
    int count[4];
    int i;

    for(i=0;i<10;i++){
        printf("Input Area (m^2)\n");
        scanf("%f",&m2_area);

        pyung_area = m2_area / 3.305;

        printf("This apartment is %.1f pyung\n",pyung_area);

        if(pyung_area<15) count[0]++;
        else if(pyung_area<30) count[1]++;
        else if(pyung_area<50) count[2]++;
        else count[3]++;
    }

    printf("소형 아파트 : %d개\n",count[0]);
    printf("중소형 아파트 : %d개\n",count[1]);
    printf("중형 아파트 : %d개\n",count[2]);
    printf("대형 아파트 : %d개\n",count[3]);

    
    return 0;
}