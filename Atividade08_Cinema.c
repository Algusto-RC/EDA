#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DECLARACOES:
    int linhas=0, colunas=0, coluna=0, limitador=0;
    char linha;

    //MAIN:
    //Campo para coleta de dados
        scanf("%d %d", &linhas, &colunas);
        int lugares[linhas][colunas];
        memset(lugares, 0, sizeof(lugares));
 
        do
        {
            limitador = scanf(" %c%i\n", &linha, &coluna);
            lugares[linha-65][coluna-1] = 1;
        } while (limitador != EOF);    
            
    //----------------------------------------------------------------------------------------------------------------------------------
    //Recurso que mostrara o mapa de assentos
        /*Trecho utilizado para printar os numeros referentes aos lugares na parte superior dos assentos.
          Nas aspas do printf, usou-se valores para definir: padding - tamanho - valor, respectivamente.*/
            printf("  ");
            for (int k = 1; k <= colunas; k++)
                printf("%02d ", k); //padding /trailing zero /leading 
            printf("\n");
        //-------//-------//-------//-------//-------//-------//-------//-------//-------//-------//-------
        /*Trecho utilizado para printar o mapa de assentos*/
            for (int i = linhas-1; i >= 0; i--)
            {
                printf("%c ", 65+i); /*Linha utilizada para printar as letras indicadoras no lado esquerdo dos assentos*/

                for (int j = 0; j < colunas; j++)
                    printf("%s ", (lugares[i][j] == 0 ? "--" : "XX")); //Operador ternário

                printf("\n");
            }
        //-------//-------//-------//-------//-------//-------//-------//-------//-------//-------//-------
    //----------------------------------------------------------------------------------------------------------------------------------
    return 0;
}