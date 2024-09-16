#include <stdio.h>
#include <limits.h>

int main(){
    int x = INT_MAX;
    x = x+1;
    int y = INT_MIN;
    y = y -1;
    printf("-----------------------------------------------------\n");
    printf("MAXIMO CHAR: %d\n", CHAR_MAX);
    printf("MINIMO CHAR: %d\n", CHAR_MIN);
    printf("-----------------------------------------------------\n");
    printf("MAXIMO INT: %d\n", INT_MAX);
    printf("MINIMO INT: %d\n", INT_MIN);
    printf("-----------------------------------------------------\n");
    printf("MAXIMO SHORT INT: %d\n", SHRT_MAX);
    printf("MINIMO SHORT INT: %d\n", SHRT_MIN);
    printf("-----------------------------------------------------\n");

    printf("MAXIMO UNSIGNED INT: %u\n", UINT_MAX);
    printf("-----------------------------------------------------\n");
    printf("MAXIMO LONG INT: %ld\n", LONG_MAX);
    printf("MINIMO LONG INT: %ld\n", LONG_MIN);
    printf("-----------------------------------------------------\n");
    printf("MAXIMO UNSIGNED LONG INT: %lu\n", ULONG_MAX);
    printf("-----------------------------------------------------\n");
    printf("MAXIMO LONG LONG INT: %lld\n", LLONG_MAX);
    printf("MINIMO LONG LONG INT: %lld\n", LLONG_MIN);
    printf("-----------------------------------------------------\n");
    printf("MAXIMO UNSIGNED LONG LONG INT: %llu\n", ULLONG_MAX);
    printf("-----------------------------------------------------------------------------------------\n");
    printf("VARIAVEL ACIMA DO ACIMA DO LIMITE (OVERFLOW): %d\n", x);
    printf("Nesse caso, o valor 'estoura' e o volta para o minimo permitido pelo sistema \n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("VARIAVEL INT ABAIXO DO MINIMO (UNDERFLOW): %d\n", y);
    printf("Nesse caso, o valor tambem 'estoura' porem, volta para o maximo permitido pelo sistema \n");
    printf("-----------------------------------------------------------------------------------------\n");

    return 0;
}