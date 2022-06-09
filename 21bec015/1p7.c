#include <stdio.h>
int main(){
    int num1,num2;
    float addition ,substraction,multiplication,division,modulo;

    printf("enter the values of two numbers");
    scanf("%d %d",&num1,&num2);
    addition =num1+num2;
    substraction =num1-num2;
    multiplication =num1*num2;
    division =num1/num2;
    modulo =num1%num2;

    int i;
    printf("enter the operation you wants to perform\n 1.Addition\n 2.substraction\n 3.multiplication\n 4.division\n 5.modulo\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        printf("add is %f",addition);
        break;
        case 2:
        printf("substraction is %f",substraction);
        break;
        case 3:
        printf("multiplication is %f", multiplication);
        break;
        case 4:
        printf("division is %f", division);
        break;
        case 5:
        printf("modulo is %f", modulo);
        break;
    }
    return 0;
}