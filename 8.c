            /* program to calculate simple interest*/
#include<stdio.h>
int main(){
    float p,r,t,si;
    p=1000;
    r=5;
    t=10;

    si=(p*r*t)/100;     //formula for simple interset

    printf("The value os simple interest is %f \n",si);

    return 0;

}