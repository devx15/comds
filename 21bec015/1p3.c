// program to find area and volume of sphere
#include <stdio.h>
int main(){
   float radius , area , volume;
    printf("enter the value of radius\n");
    scanf("%f",&radius);
     float pi=3.14;
     area=4*pi*radius*radius;
     printf("the area of the sphere is %f\n",area);
     volume=4*pi*radius*radius*radius/3;
     printf("the volume of spher is %f\n",volume);


    return 0;
}