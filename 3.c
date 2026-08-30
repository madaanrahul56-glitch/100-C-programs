/*Area and circumference of circle*/
#include<stdio.h>
int main(){
    float r,area,circum;
    printf("Enter Radius :");
    scanf("%f",&r);

    area=3.14*r*r;          //formula for area of circle
    circum=2*3.14*r;        //formula for circumference of circle

    printf("Area of circle is :%f \n",area);
    printf("Circumference of circle is :%f",circum);

    return 0;


}