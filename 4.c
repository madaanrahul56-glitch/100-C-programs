/* convert Celsius temperature into Fahrenheit*/
#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("Enter celsius :");
    scanf("%f",&celsius);
    
    fahrenheit=celsius*9/5+32;      // formula for conversion

    printf("Conversion of celsius to fahrenheit is : %f \n",fahrenheit);

    return 0;
}