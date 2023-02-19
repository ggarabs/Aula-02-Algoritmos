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
        printf("Parabéns!!! Você acertou!\n");
    }else if(chute < sorteado){
        printf("Você chutou muito baixo! O valor correto é %d.\n", sorteado);
    }else{
        printf("Você chutou muito alto! O valor correto é %d.\n", sorteado);
    }

    return 0;
}