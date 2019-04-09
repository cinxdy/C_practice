#include <stdio.h>

struct person{
    char name[20]; 
    char address[80]; 
    int age;
};

int main(){

    struct person per[3];
    

    for(int i=0;i<3;i++){
        printf("%d번째 사람 인적사항을 입력하시오.\n",i+1);
        printf("이름은?");
        scanf("%s",per[i].name);
        getchar();
        printf("주소는?");
        fgets(per[i].address,sizeof(per[i].address),stdin);
        printf("나이는?");
        scanf("%d",&per[i].age);
    }
    
    for(int i=0;i<3;i++){
        printf("%d번째 사람 : %s/ %s/ %d\n",i+1,per[i].name,per[i].address,per[i].age);
    }

    

}
