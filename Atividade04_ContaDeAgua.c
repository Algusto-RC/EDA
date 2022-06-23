#include <stdio.h>
#include <stdlib.h>

int main() 
{
    //DECLARACOES:
    int gasto, conta;

    //MAIN:
    scanf("%d", &gasto);

    if (0<=gasto && gasto<=10){             
        conta = 7;

    }else if (11<=gasto  && gasto<=30){       
        conta = 7 + (gasto-10);
    
    }else if(31<=gasto && gasto<=100){       
        conta = 7 + 20 + (gasto-30)*2;

    }else{                          
        conta = 7 + 20 + 140 + (gasto-100)*5;
    }

    printf("%d\n", conta);

    return 0;
}
