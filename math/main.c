#include <stdio.h>
#include <string.h>
#include "mathematics.h"

int main(void){
    char *choice;

    printf("\nOperation: (one word): ");
    scanf("%s", choice);

    if(strcmp(choice, "add") == 0){
        double num1, num2;
        printf("Number: ");
        scanf("%f", &num1);

        printf("Number: ");
        scanf("%f", &num2);

        add(num1, num2);
    }

    else if(strcmp(choice, "sub") == 0){
        double num1, num2;
        printf("Number: ");
        scanf("%f", &num1);

        printf("Number: ");
        scanf("%f", &num2);

        subtract(num1, num2);
    }

    else if(strcmp(choice, "divide") == 0){
        double num1, num2;
        printf("number: ");
        scanf("%f", &num1);

        printf("number: ");
        scanf("%f", &num2);

        divide(num1, num2);
    }

    else if(strcmp(choice, "multiply") == 0){
        double num1, num2;
        printf("number: ");
        scanf("%f", &num1);

        printf("number: ");
        scanf("%f", &num2);

        multiply(num1, num2);
    }

    else if(strcmp(choice, "power") == 0){
        double num1, num2;
        printf("base: ");
        scanf("%f", &num1);

        printf("exponent: ");
        scanf("%f", &num2);

        power(num1, num2);
    }

    else if(strcmp(choice, "sqrt") == 0){
        double num1;
        printf("number: ");
        scanf("%f", &num1);

        square_root(num1);
    }
}
