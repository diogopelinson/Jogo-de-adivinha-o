#include <stdio.h>

int main(){ 
    printf("Ola linguagem C\n");

    int numero1;
    int numero2;
    
    printf("Escolha um numero: \n");
    scanf("%d", &numero1);

    printf("Escolha outro numero: \n");
    scanf("%d", &numero2);

    int numero3 = numero1 * numero2;


    printf("A multiplicacao de %d por %d eh igual a %d\n", numero1, numero2, numero3);


}




