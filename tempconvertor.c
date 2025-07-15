#include<stdio.h>
#include<stdlib.h>


float ctof(float c) {
    return (c*1.8)+32;}
float ftoc(float f){
    return (f-32)/1.8;}
float ctok(float c){
    return c + 273.15;}                        
float ktoc(float k){
    return k - 273.15;}
float ftok(float f){
    return (f - 32) * 5/9 + 273.15;}
float ktof(float k){
    return (k - 273.15) * 9/5 + 32;}



void display(char unit2,float result) {
    if(unit2=='c'||unit2=='C'){
        printf("Celsius: %.3f (deg)C\n", result);
    } else if(unit2=='f'||unit2=='F'){
        printf("Fahrenheit: %.3f (deg)F\n", result);
    } else if(unit2=='k'||unit2=='K'){
        printf("Kelvin: %.3f K\n", result);
    } else {
        printf("Invalid unit.\n");
        exit(1);
    }

};

int main(){
    char unit1, unit2;
    float n, result;
    printf("From which unit do you wanna measure? [Initial of the unit only:] ");
    scanf(" %c", &unit1);
    printf("To which unit? [Initial of the unit only:] ");
    scanf(" %c", &unit2);
    printf("Enter the temperture value in %c, you wanna convert: ", unit1);
    scanf("%f", &n);
    if(unit1 == 'c' || unit1 == 'C'){
        if(unit2=='f'||unit2=='F'){
            result = ctof(n);
        } else if(unit2=='k'||unit2=='K'){
            result = ctok(n);
        } else {
            printf("Invalid unit conversion.\n");
            return 1;
        }
    }else if(unit1=='f'||unit1=='F'){
        if(unit2=='c'||unit2=='C'){
            result = ftoc(n);
        } else if(unit2=='k'||unit2=='K'){
            result = ftok(n);
        } else {
            printf("Invalid unit conversion.\n");
            return 1;
        }
    }else if(unit1=='k'||unit1=='K'){
        if(unit2=='c'||unit2=='C'){
            result = ktoc(n);
        } else if(unit2=='f'||unit2=='F'){
            result = ktof(n);
        } else {
            printf("Invalid unit conversion.\n");
            return 1;
        }
    } else {
        printf("Invalid unit input.\n");
        return 1;
    }
    
    display(unit2, result);
    return 0;

}