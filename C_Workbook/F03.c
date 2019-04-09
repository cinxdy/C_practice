#include <stdio.h>

int main(){
    int jumsu[5][3];
    int sum[3]={0};
    float average[3];
    int i,j;
    char text[3][10]={"kor","eng","math"};

    for(i=0;i<5;i++){
        printf("%dth student kor,eng,math point >>>\n",i+1);
        for(j=0;j<3;j++){
            scanf("%d",&jumsu[i][j]);
            sum[j]+=jumsu[i][j];
        }
    }
    for(j=0;j<3;j++){
        average[j]=sum[j]/5.0;
        printf("%s point total >>> %d average >>> %.2f\n",text[j],sum[j],average[j]);
    }
}