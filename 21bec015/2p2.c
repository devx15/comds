// Write a function power that computes x raised to the power y for integer x and y and returns result.
#include<stdio.h>
#include<conio.h>
#include<math.h>

int power(int a,int b);
int main()

 {
  int x,y;
  printf("enter the x:");
  scanf("%d",&x);
  printf("enter the y:");
  scanf("%d",&y);
  power(x,y);
 }

int power(int a,int b)
 {
  float c;
  c=pow(a,b);
  printf("\n ans=%lf",c);
  return 0;
 }
