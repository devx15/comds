// code for swapping the numbers
#include <stdio.h>
void swap (int ,int );
int main(){
    int a,b;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    printf("before swap a=%d and b=%d",a,b);
    swap(a,b);
    return 0;
}
void swap(int x , int y){
    int z;
    z=x;
    x=y;
    y=z;
    printf("after swap a=%d and b=%d",x,y);
  
}