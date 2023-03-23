/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float f, c;
    printf("Ingrese la temperatura en grados Fahrenheit en formato númerico: ");
    scanf("%f", &f);
    c = (f-32)*5/9;
    printf ("El valor de %f en grados Celcius es %f\n", f, c);
    return 0;
}
