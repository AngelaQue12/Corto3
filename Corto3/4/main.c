/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "add.h"
int
main ()
{
  int a,b,c;
  float p;
    printf("Ingrese un número: ");
    scanf("%d", &a);
    printf("Ingrese otro número: ");
    scanf("%d", &b);
    // suma
    c = add(a, b);
    printf("a + b = %d\n", c);
    // resta
    c = subtract(a, b);
    printf("a - b = %d\n", c);
    // multiplicacion
    c = multiply(a, b);
    printf("a * b = %d\n", c);
    // division
    c = divide(a, b);
    printf("a / b = %d\n", c);
    //pi
    p = pi();
    printf("pi= %f\n", p); 
  return 0;
}
