#include<stdio.h>
int main(){
    char name[30];
    int age,RN;
    double P;
    printf("Enter name");
    scanf("%s",&name);
    printf("Enter age");
    scanf("%d",&age);
    printf("Enter Roll number");
    scanf("%d",&RN);
    printf("Enter Percentage");
    scanf("%lf",&P);
    printf("NAAME=%s \n",name);
    printf("AGE=%d \n",age);
    printf("ROLL NUMBER=%d \n",RN);
    printf("PERCENTAGE=%d \n",P);
    return 0;
}