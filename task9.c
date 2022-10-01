#include <stdio.h>
#include<stdlib.h>

int main()
{
    printf("Char : %d byte\n", sizeof(char));
    printf("Short : %d bytes\n", sizeof(short));
    printf("Int : %d bytes\n", sizeof(int));
    printf("Long long int : %d bytes\n", sizeof(long long int));
    printf("Size_t : %d bytes\n", sizeof(size_t));
    printf("Float : %d bytes\n", sizeof(float));
    printf("Double : %d bytes\n", sizeof(double));
    printf("Int*: %d bytes\n", sizeof(int*));
    int x[10];
    printf("Int[10] : %d bytes\n", sizeof(x));
}