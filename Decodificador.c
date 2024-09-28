#include <stdio.h>
#include <stdlib.h>
#include "Funcao.h"

int main(){
    unsigned int numMensagens; //[1,10000]
    int b; //[-100, 100]
    int decimal; 
    char mensagem[101], aux[3];
    int i, j; //Estrutura de repetição
    int x; // parametro da func_val


    printf("Digite a quantidade de mensagens interceptadas: ");
    scanf("%u", &numMensagens);

    for (j = 0; j < (int)numMensagens; j++)
    {
        printf("Digite o valor de B: ");
        scanf("%d", &b);
        printf("Digite a mensagem em Hexadecimal: ");
        scanf("%s", mensagem);

        for (i = 0, x = 1; i < 101; i+=2, x++)
        {
            aux[0] = mensagem[i];
            aux[1] = mensagem[i+1];
            aux[2] = '\0';
            decimal = (int)strtol(aux, NULL, 16);
    
            if (decimal == 0)
            {
                break;
            }else if (func_val(x, b) != 0)
            {
                printf("%c", decimal);
            }
            
            
        }
        printf("\n");
    }

    return 0;
}