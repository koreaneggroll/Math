#include "mathematics.h"
#include <stdio.h>
#include <stdlib.h>

/*
    Im going to try to make this only using adition
*/



//Addition
double add(double a, double b){
    return a + b;
}



//Subtraction implemented using addition
double subtract(double a, double b){
    return a + (-b);
}



//Divion which I dont know how to implement using addition
double divide(double a, double b){
    /*
        Couldn't find a way to implement division using addition or subtraction

        PULL REQUEST IF YOU HAVE AN IDEA
    */

    if(b == 0){
      printf("Can't divide by 0\n");
      exit(1);
    }

    return a / b;
}



//Returns the remainder of a division
int rem(int a, int b){
    int result;
    result = a-(a/b*b);

    return result;
}



//Multiplication implemented by addition
double multiply(double a, double b){

    if(b < 0){
      printf("Error: variable 'b' can't be negative\n");
      exit(1);
    }

    double result = 0;

    for(int i = 1; i <= b; i++){
        result = add(result, a);
    }

    return result;
}



double power(double a, double b){
    double result = 1;

    for(b; b > 0; b--){
        result = multiply(result, a);
    }

    return result;
}



//Gets the square root of a number
double square_root(double a){
    double sqrt, temp;


    sqrt = divide(a, 2);
    temp = 0;

    while(sqrt != temp){
        temp = sqrt;

        sqrt = (a/temp + temp) / 2;
    }

    return sqrt;

}



//Recursive function
int factorial(int a){

    if(a < 0){
      printf("Error: variable 'a' can't be negative");
      exit(1);
    }

    if(a == 0){
        return 1;
    }

    return multiply(a, factorial(subtract(a, 1)));
}



//Converts from decimal to binary
void dec_to_bin(int decimal){

  if(decimal < 0){
    printf("Cannot perform that operation\n");
    exit(1);
  }

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



//Converts from binary to decimal
void bin_to_dec(int bin){
    int dec = 0, i = 0, rem;
    while (bin != 0) {
        rem = Remainder(bin, 10);
        bin /= 10;
        dec += multiply(rem, power(2, i));
        ++i;
    }
    printf("%d\n", dec);
}



void insert_whole_numbers(int c, int a, int b){
    int result;

    result = c * b + a;

    printf("%d %d/%d => ", c, a, b);
    printf("%d*%d+%d => %d/%d\n", c, b, a, result, b );
    printf("\t -----\n");
    printf("\t   %d\n", b);
}



void get_out_numbers(int a, int b){
    int result, c, r;
    r = Remainder(a, b);
    c = divide(a, b);

    printf("%d/%d => %d %d/%d", a, b, c, r, b);
}



void multiply_fractions(int a, int b, int c, int d){
    int result_top;
    int result_bottom;

    result_top = multiply(a, c);
    result_bottom = multiply(b, d);

    printf("%d/%d * %d/%d => %d*%d/%d*%d = %d/%d", a, b, c, d, a, c, b, d, result_top, result_bottom);
}



void divide_fractions(int a, int b, int c, int d){
    int result_top;
    int result_bottom;

    result_top = multiply(a, d);
    result_bottom = multiply(b, c);

    printf("%d/%d : %d/%d => %d/%d : %d/%d = %d/%d", a, b, c, d, a, b, d, c, result_top, result_bottom);
}



void multiply_fractions_same_base(int a, int b, int exp1, int exp2){
    int result_exponent;

    result_exponent = add(exp1, exp2);

    printf("(%d/%d)^%d * (%d/%d)^%d => (%d/%d)^%d+%d = (%d/%d)^%d", a, b, exp1, a, b, exp2, a, b, exp1, exp2, a, b, result_exponent);

}



void divide_fractions_same_base(int a, int b, int exp1, int exp2){
  int result_exponent;

  result_exponent = subtract(exp1, exp2);

  printf("(%d/%d)^%d : (%d/%d)^%d => (%d/%d)^%d-%d = (%d/%d)^%d", a, b, exp1, a, b, exp2, a, b, exp1, exp2, a, b, result_exponent);
}



void power_of_power(int a, int b, int m, int n){
  int result_exponent;

  result_exponent = multiply(m, n);

  printf("[(%d/%d)^%d]^%d => (%d/%d)^%d * %d = (%d/%d)^%d", a, b, m, n, a, b, m, n, a, b, result_exponent);
}



void fraction_from_num(int a, int b, int n){
  int result;

  result = multiply(a, n);

  printf("%d/%d*%d => %d/%d = %f", a, b, n, result, b, divide(result, n));
}



float percentage(float p, float n){
  float per;
  per = p * n / 100;

  return per;
}
