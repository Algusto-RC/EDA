#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DECLARACOES:
    int indices=0, menor=1000000, menorIndice;

    //MAIN:
    scanf("%d", &indices);

    int baldes[indices];

    for (int i=0; i < indices; i++)
    {
        scanf("%d", &baldes[i]); 
    }

    for (int j=0; j < indices; j++)
    {
        if(menor > baldes[j])
        {
            menor = baldes[j];
            menorIndice = j;
        }
    }
    
    printf("%d\n", menorIndice);
    return 0;
}
