#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);             // taking input from user
    
    printf("Sum of two number is : %d \n",a+b);
    printf("Difference of two number is : %d \n",a-b);
    printf("Product of two number is : %d \n",a*b);
    printf("quotient of two number is : %d \n",a/b);
    printf("Remainder of two number is : %d \n",a%b);

    return 0;
}