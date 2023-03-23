/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() 
{
    int N, i, t1 = 0, t2 = 1, next;
    printf("Ingrese el número de términos que desea generar: ");
    scanf("%d", & N);
    
    printf("Serie Fibonacci: ");
    for (i = 1; i <= N; i++) {
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return 0;
}

