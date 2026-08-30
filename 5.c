/* convert Fahrenheit temperature into Celsius*/

#include<stdio.h>
int main(){
    float cel,fah;
    printf("Enter fahrenheit : ");
    scanf("%f",&fah);
    
    cel=(fah-32)*5/9;       // formula for conversion

    printf("Converesion of fahrenheit to celsius is :%f",cel);

    return 0;
}