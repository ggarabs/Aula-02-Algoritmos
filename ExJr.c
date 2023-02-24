#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("*** BEM VINDO AO JOGO DA ADIVINHACAO ***\n");

    srand(time(NULL));

    int sorteado = 1 + rand()%100, chute;

    printf("Digite um numero inteiro entre 1 e 100: ");
    scanf("%d", &chute);
    printf("\n");

    while(chute > 100 || chute < 1){
        printf("Valor invalido! Digite um numero inteiro entre 1 e 100: ");
        scanf("%d", &chute);
        printf("\n");
    }

    if(chute == sorteado){
        printf("Parabens!!! Voce acertou!\n");
    }else if(chute < sorteado){
        printf("Voce chutou muito baixo! O valor correto eh %d.\n", sorteado);
    }else{
        printf("Voce chutou muito alto! O valor correto eh %d.\n", sorteado);
    }

    return 0;
}