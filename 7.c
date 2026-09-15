    /*program to swap two numbers without using a third variable*/
#include<stdio.h>
int main(){
    int a,b;
    a=1;
    b=7;
    a=a+b;
    b=a-b;
    a=a-b;

    printf("The value of a is: %d \n",a);
    printf("The value of b is: %d \n",b);

    return 0;
}