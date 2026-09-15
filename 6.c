/*swap two numbers using a third variable*/
#include<stdio.h>
int main(){
    int a,b,c;
    a=1;
    b=7;
    c=a;
    a=b;
    b=c;

    printf("The value of a is : %d \n",a);
    printf("The value of b is : %d \n",b);

    return 0;
}