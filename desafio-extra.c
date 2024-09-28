#include <stdio.h>


int main(){
    float n1,n2,n3 = 0, ppd, EU = 0, notaFinal;
    int vericadorEU, verificadorN3;
    
    do
    {
        printf("Digite a nota da N1 [0; 4.5]: ");
        scanf("%f", &n1);
        printf("Digite a nota da N2 [0; 4.5]: ");
        scanf("%f", &n2);
        printf("Digite a nota da PPD [0; 1]: ");
        scanf("%f", &ppd);
        if ((n1<0 || n1 > 4.5) || (n2 < 0 || n2 > 4.5) || (ppd < 0 || ppd > 1))
        {
            printf("NOTAS INVALIDAS! - CODIGO DE ERRO: 3\n");
        }else{
            break;
        }
    } while (1);

    printf("Foi realizado o Exame Unificado? [Digite 1 para 'sim' e 0 para 'nao']: ");
    scanf("%d", &vericadorEU);
    if (vericadorEU == 1)
    {
        do
        {
            printf("Nota Exame Unificado: ");
            scanf("%f", &EU);
            if (EU < 0 || EU > 1)
            {
                printf("NOTA INVALIDA!\n");
            }else{
                break;
            }
            
        } while (1);
    }

    printf("Foi realizada a N3? [Digite 1 para 'sim' e 0 para 'nao']: ");
    scanf("%d", &verificadorN3);
    if (verificadorN3 == 1)
    {
        do
        {
            printf("Nota N3: ");
            scanf("%f", &n3);
            if (n3 < 0 || n3 > 4.5)
            {
                printf("NOTA INVALIDA\n");
            }else{
                break;
            }

        } while (1);  

        if (n2 > n1)
        {
            notaFinal = n3 + n2 + ppd + EU;
        }else if(n1 > n2){
            notaFinal = n1 + n3 + ppd + EU;
        }else{
            notaFinal = n3 + n2 + ppd + EU;
        }
        
    }else{
        notaFinal = n1 + n2 + ppd + EU;
    }

    if (notaFinal > 10)
    {
        notaFinal = 10;
    }
    
    printf("---------------------------------------------\n");
    if (notaFinal >= 7)
    {
        printf("Nota final: %.2f -- APROVADO\n", notaFinal);
    }else{
        printf("Nota final: %.2f -- REPROVADO\n", notaFinal);
    }
    printf("---------------------------------------------\n");
    
    
    
    

    
    

    
    
   
    
    


}