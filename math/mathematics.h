#ifndef MATHEMATICS_H   //INCLUDE GUARD
#define MATHEMATICS_H

//FUNCTION DECLARATIONS
double add(double a, double b);
double subtract(double a, double b);
double divide(double a, double b);
double multiply(double a, double b);
double power(double a, double b);
double square_root(double a);
double factorial(double a);
void dec_to_bin(int decimal);
void bin_to_dec(int bin);
void insert_whole_numbers(int c, int a, int b);
void get_out_numbers(int a, int b);
int Remainder(int a, int b);
void multiply_fractions(int a, int b, int c, int d);
void divide_fractions(int a, int b, int c, int d);
void multiply_fractions_same_base(int a, int b, int exp1, int exp2);
void divide_fractions_same_base(int a, int b, int exp1, int exp2);
void power_of_power(int a, int b, int m, int n);
void fraction_from_num(int a, int b, int n);
float percentage(float p, float n);

#endif //MATHEMATICS_H
