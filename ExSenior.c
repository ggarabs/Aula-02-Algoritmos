#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("*** BEM VINDO AO JOGO DA ADIVINHACAO ***\n\n");

    srand(time(NULL));

    int sorteado = 1 + rand()%100, chute = -1, tentativas = 0;

    while(chute != sorteado && tentativas < 5){
        tentativas++;

        printf("Digite um numero inteiro entre 1 e 100: ");
        scanf("%d", &chute);
        printf("\n");

        while(chute > 100 || chute < 1){
            printf("Valor invalido! Digite um numero inteiro entre 1 e 100: ");
            scanf("%d", &chute);
            printf("\n");
        }

        if(tentativas < 5){
            if(chute == sorteado){
                printf("Parabens!!! Voce acertou em %d tentativa(s).\n", tentativas);
            }else if(chute < sorteado){
                printf("Voce chutou muito baixo!\n");
            }else{
                printf("Voce chutou muito alto!\n");
            }
        }else{
            if(chute == sorteado){
                printf("Parabens!!! Voce acertou em %d tentativa(s).\n", tentativas);
            }else{
                printf("Voce excedeu o numero maximo de tentativas!\nO numero sorteado foi %d.\n", sorteado);
            }
        }
    }

    printf("\n");

    return 0;
}