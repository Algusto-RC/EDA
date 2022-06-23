#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//DECLARACOES:
    char frase[10000], palavraVelha[40], palavraNova[40];

void editaTexto(/*char frase[10000], char palavraVelha[40], char palavraNova[40]*/);

int main()
{   
    //MAIN:
        gets(frase);
        gets(palavraVelha);
        gets(palavraNova);
        
        editaTexto(/*frase, palavraVelha, palavraNova*/); 
        
        printf("\n");
        printf("%s", frase);
        
    return 0;
}

//Funcao utilizada para separar nomes.  
void editaTexto(/*char frase[10000], char palavraVelha[40], char palavraNova[40]*/)
{
    //DECLARACOES:
        char armazenador[40];
        int qtdaFrase, qtdaPVelha, qtdaPNova, indicePV=0, indiceARM=0, contador=0, ctt=0;

    //MAIN:
        qtdaFrase  = strlen(frase);
        qtdaPVelha = strlen(palavraVelha);
        qtdaPNova  = strlen(palavraNova);

        //Laço para encontrar as semelhancas entre os caracteres
        for (int i = 0; i < qtdaFrase; i++)
        {
            /*Responsavel pelo armazenamento dos caracteres
              na que sera impressa*/
            if (frase[i] != palavraVelha[indicePV])
            {
                indicePV=0;
                indiceARM=0;

                frase[ctt] = frase[i];
                memset(armazenador, '*', sizeof(armazenador));

            /*Responsavel por identificar se existe igualdade
              entre as palavras digitadas*/ 
            }else
            {
                indicePV++;

                armazenador[indiceARM] = frase[i];

                /*Incrementa o contador constantemente para verificar
                  igualdade entre as palavras do texto e a que foi digitada pelo usuario*/
                for (int j = 0; j < qtdaPVelha; j++)
                {
                    if (armazenador[j] == palavraVelha[j])
                        contador++;
                    else
                        contador=0;                                     
                }
                
                /*Caso exista igualdade entre as palavras, este trecho de cod
                  se responsabiliza pela substituicao de palavras na string final.*/
                if (contador == qtdaPVelha)
                {
                    for (int k = 0; k < qtdaPNova; k++)
                        frase[i-qtdaPVelha+k+1] = palavraNova[k];
                    
                    /*Trecho responsavel pela formatacao*/
                    if (qtdaPVelha > qtdaPNova)
                    {
                        i=i+(qtdaPVelha);   
                    }else if(qtdaPVelha < qtdaPNova)
                    {
                        i=i+(qtdaPNova);   
                    }
                }
                indiceARM++;
            }
            ctt++;
        }
}
