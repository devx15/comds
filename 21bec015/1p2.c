// program to find number of months and days
#include <stdio.h>
int main(){
    int days;
    int months;
    printf("enter the number of days\n");
    scanf("%d",&days);
     months=days/30;
     days= days%30;
    printf("the months are %d", months);
    if(days){
        printf("and days are %d",days);
    }

    return 0;
}