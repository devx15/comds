

// program to find the greatest out of three numbers
#include <stdio.h>
int main(){
    int num1 , num2 ,num3;
    printf("enter the three numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if ((num1>num2) && (num1>num3)){
        printf("the greatest number is %d", num1);
    }
    else if (num2>num3){
        printf("the greatest is %d",num2);
    }
    else{
        printf("%d",num3);
    }
    return 0;
}