#include<stdio.h>
#include<math.h>
int main(){
    int A,B,C;
    printf("enter the value of A,B,C");
    scanf("%d %d %d",&A,&B,&C);

    float first_root;
    double l=B*B-4*A*C;
    double z=sqrt(l);
    first_root=(B+z)/2;
    printf("first root of the equation ax^2+bx+c=0 is %lf",first_root); 

    float second_root;
    second_root=(-B+z)/2;
    printf("first root of the equation ax^2+bx+c=0 is %lf",second_root); 
}