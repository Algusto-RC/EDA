#include <stdio.h>
#include <stdlib.h>

//DECLARACOES:
    //Declaracao de estruturas
    struct tipoFiliacao
    {
        char nome[80];
        char nomeMae[80];
        char nomePai[80];
    };
    //-------//-------//-------
    //Declaracao de funcoes
    struct tipoFiliacao separaLinhaCSV(char linha[240]);
    //-------//-------//-------
//-------------------------------------------------------
    /*
    int main()
    {
        struct tipoFiliacao parentesco;

        parentesco = separaLinhaCSV("Aug Camp,Tim Maia,Cleber bambam");

        printf("%s - %s - %s \n", parentesco.nome, parentesco.nomeMae, parentesco.nomePai);
        return 0;
    }
    */
//-------------------------------------------------------
//Funcao utilizada para separar nomes.
    struct tipoFiliacao separaLinhaCSV(char linha[240])
    {
        struct tipoFiliacao parentesco;
        int i=0, j=0, k=0;

        //Armazena o primeiro nome:
            while (linha[i] != ',')
            {
                parentesco.nome[i] = linha[i];
                i++;
            }
            parentesco.nome[i] = '\0'; /*Necessario acrescentar o \0 para que não ocorra 
                                         o armazenamento de dados indesejaveis*/
        //-----------------------------------------
        //Armazena o nome da mae:
            j=i+1; i=0;
            while (linha[j] != ',')
            {
                parentesco.nomeMae[i] = linha[j];
                i++; j++;
            }
            parentesco.nomeMae[i] = '\0';
        //-----------------------------------------
        //Armazena o nome do pai:
            k=j+1; i=0;
            while (linha[k] != ',' && linha[k] != '\0')
            {
                if(linha[k]==' ' || linha[k]>=65 && linha[k]<=122)     /*Condicao necessaria para impedir que dados indesejados sejam armazenados*/
                    parentesco.nomePai[i] = linha[k];

                i++; k++;
            }
            parentesco.nomePai[i] = '\0';
        //-----------------------------------------
        return parentesco;
    }