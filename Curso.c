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

    int acertou = (chute == numerosecreto);

      if(acertou) {
    printf("Parabens!! Voce acertou!!\n");
    printf("Jogue de novo, voce e um bom jogador!");
    }

    else {

        int maior = chute > numerosecreto;
    if(maior) { 
        printf("Seu chute foi maior que o numero secreto!\n");
    }
        else {
            printf("Seu chute foi menor que o numero secreto!\n");
        }
    }
}