// code to reverse the the digits
#include <stdio.h>
int main(){
    int num,sin=0,cos=0;

    printf("enter the number");
    scanf("%d",&num);
     while(num>0)
    { sin=num%10;
     cos=cos*10+sin;
     num=num/10;}
     printf("%d",cos);

}
