#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numerosecreto, palpite, regras, opcao;

    printf("Menu principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
{
    case 1:
        srand(time(0));
        numerosecreto = rand() % 10;
        printf("Digite um número de 0 a 9\n");
        scanf("%d", &palpite);
        if (palpite == numerosecreto) 
        {
            printf("Parabéns, você acertou!\n");
            printf("Número secreto: %d\n", numerosecreto);
        } else {
            printf("Você errou!\n");
            printf("Número secreto: %d\n", numerosecreto);
                }
        break;
    case 2:
        printf("Regras do jogo:\n");
        printf("Digite a opção relacionada as regras do jogo!\n");
        scanf("%d", &regras);
        switch (regras) {
     case 1:
        printf("Regra 1:\n");
        printf("O computador escolhe um número secreto entre 0 e 9.\n");
        break;
    case 2:
        printf("Regra 2:\n");
        printf("Você deve tentar adivinhar o número.\n");
    case 3:
        printf("Regra 3:\n");
        printf("Se você acertar, ganha o jogo.\n");
        break;
    case 4:
        printf("Regra 4:\n");
        printf("Se errar, o número secreto será revelado.\n");
        break;
    default:
        printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        break;
        }


}







}