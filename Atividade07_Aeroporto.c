#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DECLARACOES:
    int aeroportos[101], A=1, V=1, localSaida, localDestino, maior=0, maiorIndice=0, teste=0;
    int i, j;

    //MAIN:
    //Recebimento de dados:
    scanf("%d %d", &A, &V);

    while(A!=0 || V!=0){
        for (i = 0; i < 101; i++) {aeroportos[i]=0;}
        teste++;

        for (i = 1; i <= V; i++)
        {
            scanf("%d %d", &localSaida, &localDestino);
            aeroportos[localSaida]++;
            aeroportos[localDestino]++;
        }
        //Teste 1, encontrando o primeiro maior fluxo de trafego
        if(teste == 1)
        {
            for (j = 1; j <= A; j++)
            {
                if(maior < aeroportos[j])  
                {
                    maior = aeroportos[j];
                    maiorIndice = j;
                }
            }
            //Saida:  
            printf("Teste %d\n", teste);
            printf("%d\n\n", maiorIndice);
        }else
        {
            //Saida:  
            printf("Teste %d\n", teste);
            for (j = 1; j <= A; j++)
            {
                if(maior == aeroportos[j])  
                {
                    printf("%d ", j);
                }
            }
            printf("\n\n");
        }
        
        scanf("%d %d", &A, &V);       
    }
    return 0;
}