#include <stdio.h>
#include <stdlib.h>

int main(){
    //DECLARACOES:
    int num=0, par=0, impar=0;
    
    //MAIN:

    do 
    {
        scanf("%d", &num);

        if (num%2 == 0){
            par = par + num;

        }else{
            impar = impar + num;
        }

    }while(num!=0);

    printf("%d %d\n", par, impar);
    return 0;
}