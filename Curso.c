#include <stdio.h>

int main() {

    // Imprime o cabeçalho do jogo
    printf("*****************************************\n");
    printf("* Bem vindo ao jogo de adivinhacao *\n");
    printf("*****************************************\n");

    int numerosecreto = 42;

    int chute;

   printf("Qual e o seu chute?: ");
   scanf("%d", &chute);
   printf("Seu chute foi %d\n", chute);


}