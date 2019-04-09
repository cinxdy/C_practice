#include <stdio.h>

int main(){
    int jumsu[5][3];
    int sum[5]={0};
    float average[5];
    int i,j;

    for(i=0;i<5;i++){
        printf("%dth student kor,eng,math point >>>\n",i+1);
        for(j=0;j<3;j++){
            scanf("%d",&jumsu[i][j]);
            sum[i]+=jumsu[i][j];
        }  
    }

    for(i=0;i<5;i++){
        average[i]=sum[i]/3.0;
        printf("%d-th student point total >>> %d average >>> %.2f\n",i+1,sum[i],average[i]);
    }


}