#include <stdio.h>

int main(){
    int num;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &num);

    int sum = 0, i = 1;
    for(i; i*i < num; i++){
        if(num%i==0) sum += i + num/i;
    }

    if(i*i == num) sum += i;

    if(sum == 2*num) printf("%d e um numero inteiro perfeito.\n", num);
    else printf("%d NAO e um numero inteiro perfeito.\n", num);

    return 0;
}