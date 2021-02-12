#include "mathematics.h"
#include <stdio.h>

/*
    Im going to try to make this only using adition and subtraction
*/

double add(double a, double b){
    return a + b;
}

double subtract(double a, double b){
    return a - b;
}

double divide(double a, double b){
    double result;
}

double multiply(double a, double b){
    double result;
}


double power(double a, double b){
    double result = 1;
    
    for(b; b > 0; b--){
        result = result * a;
    }

    return result;
}


double square_root(double a){
    double sqrt, temp;


    sqrt = a / 2;
    temp = 0;

    while(sqrt != temp){
        temp = sqrt;

        sqrt = (a/temp + temp) / 2;
    }

    return sqrt;

}

double factorial(double a){

}


void decToBin(int decimal){
    int bin[32];
    int rest, divide;

    int i = 0;
    while(decimal > 0 ){

        divide = decimal / 2;
        rest = decimal % 2;
        decimal = divide;

        bin[i] = rest;
        i++;
    }

    for (int j = i - 1; j >= 0; j--){
            printf("%d", bin[j]);
        }
    
    printf("\n"); 
}


void binToDec(int bin){

}