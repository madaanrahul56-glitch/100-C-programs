#include<stdio.h>
int main(){
    int l,b,area,perimeter;
    l=5;
    b=20;
    area=l*b;               //formula of area of rectangle
    perimeter=2*(l+b);      //formula of perimeter of rectangle

    printf("Area of rectangle is :%d \n",area);
    printf("Perimeter of reactangle is :%d \n",perimeter);

    return 0;

}