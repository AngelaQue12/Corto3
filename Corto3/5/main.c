/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define ARRAY_SIZE 10

int main()
{
    int array[ARRAY_SIZE];
    int *b = array;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Ingrese un entero ");
        scanf("%d", &array[i]);
    }
    printf("Elementos del array multiplicados por 2:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", *(b + i) * 2);
    }
    printf("\n");
    return 0;
}
