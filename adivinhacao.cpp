#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 3

int main(){

    // imprime o cabecalho do nosso jogo
    printf("********************************");
    printf("Bem Vindo ao Jogo da Adivinhacao");
    printf("********************************");

    int chute;
    int acertou = 0;
    int tentativas = 1;
    double pontos = 1000;

    srand(time(0));
    int numerosecreto = rand() % 100;

    while (!acertou){

        printf("Qual  e o seu %d. chute \n", tentativas);
        scanf("%d", &chute);

        if(chute < 0){

            printf("Voce nao pode chutar numeros negativos");
            continue;
        }
        
        printf("Seu %d. chute foi %d\n", tentativas, chute);

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if (acertou){

            printf("Parabens! voce acertou\n");
        
        }
        
        else if (maior){
            printf("Seu Chute foi maior que o numero secreto\n");
        }

        else{
            printf("Seu chute foi menor que o numero secreto\n");
        }
        
        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;

    }
    
    printf("Voce fex %.2f pontos\n", pontos);
    printf("Obrigado por jogar!\n");

}
