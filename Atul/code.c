#include<stdio.h>
int main (){
    int num;//1,2,3,4,5,6,7,8,9,...n
    printf("Enter the number");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("correct");
        break;

        case 0:
        printf("ok");
        break;

        default:
        printf("uncorrect");

    }
    return 0;

}