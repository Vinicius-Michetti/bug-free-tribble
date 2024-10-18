#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa para preencher um vetor com 20 vinte valores inteiros (os valores podem
ser lidos do teclado ou gerados automaticamente). Em seguida, o sistema deve solicitar ao
usuário um valor, que deve ser pesquisado no vetor. Imprima as posições do vetor que armazena
o valor informado.
*/

int main()
{
    int vetor[20], i, numero, posicao=-1;

    for( i = 0; i < 5; i++){
        printf("Digite o numero %d: ", i);
        scanf("%d", &vetor[i]);
    }

    do{
    printf("Digite um valor do vetor: ");
    scanf("%d", &numero);

    for(i = 0; i < 5; i++){
        if (numero == vetor[i]){
            posicao = i;
        }
    }
     if (posicao != -1){
            printf("A posicao eh: %d", posicao);
     }
            else
                printf("Nao encontrado\n");

    }while(posicao == -1);



}
