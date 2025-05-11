#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

int main(){

    // imprime o cabecalho do nosso jogo
    printf("********************************");
    printf("Bem Vindo ao Jogo da Adivinhacao");
    printf("********************************");

    int numerosecreto = 42;

    int chute;
    int tentativas = 1;

    while (1){

        printf("Tentativa %d\n", tentativas);
        printf("Qual e o seu chute");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0){

            printf("Voce nao pode chutar numeros negativos");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou){
            printf("Parabens! voce acertou\n");
            printf("Jogue de novo, voce e bom um jogador\n");

            break;
        }
        
        else if (maior){
            printf("Seu Chute foi maior que o numero secreto\n");
        }

        else{
            printf("Seu chute foi menor que o numero secreto\n");
        }
        
        tentativas++;

    }
    
    printf("Fim do Jogo \n");
    printf("Voce Acertou em %d tentativas\n", tentativas);

}
