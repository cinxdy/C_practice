#include <stdio.h>

int main(){
    int height[10],weight[10];
    float bmi[10];
    int count=0;
    int i;

    for(i=0;i<5;i++){
        printf("%d-th height(cm) and weight(kg)>> ",i+1);
        scanf("%d",&height[i]);
        scanf("%d",&weight[i]);

        
    }

    for(i=0;i<5;i++){
        bmi[i] = weight[i]*10000.0/height[i]/height[i];
        if(bmi[i]>=25) {
            printf("%d-th person is biman\n",i+1);
            count++;
        }
    }
    printf("total %d person is biman\n",count);
}