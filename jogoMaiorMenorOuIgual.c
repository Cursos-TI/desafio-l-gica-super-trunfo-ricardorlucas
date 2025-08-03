#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int numerojogador, numerocomputador, resultado;
char tipocomparacao;

//gerar número aleatório
srand(time(0));
numerocomputador = rand() % 100 + 1;

//gerar escolha de letra aleatória
int aleatorio = rand() % 3; // valores possíveis: 0, 1, 2

if (aleatorio == 0) {
 tipocomparacao = 'M';
} else if (aleatorio == 1){
tipocomparacao = 'N';
} else {
tipocomparacao = 'I';
}


// Início do jogo
printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
printf("O Computador vai escolher um número e o tipo de comparação.\n");
printf("M. Maior\n");
printf("N. Menor\n");
printf("T. Igual\n");

printf("Digite seu número (entre 1 e 100): ");
scanf("%d", &numerojogador);


//comparação
switch (tipocomparacao) {
 case 'M':
 case 'm':
    printf("O computador escolheu a opção Maior!\n");
    resultado = (numerojogador > numerocomputador) ? 1 : 0;
    printf("O número do computador é: %d e o do jogador: %d.\n", numerocomputador, numerojogador);
    break;

 case 'N':
 case 'n':
    printf("O computador escolheu a opção Menor!\n");
    resultado = (numerojogador < numerocomputador) ? 1 : 0;
    printf("O número do computador é: %d e o do jogador: %d.\n", numerocomputador, numerojogador);
    break;

 case 'I':
 case 'i':
    printf("O computador escolheu a opção Igual!\n");
    resultado = (numerojogador == numerocomputador) ? 1 : 0;
    printf("O número do computador é: %d e o do jogador: %d.\n", numerocomputador, numerojogador);
    break;
}

if (resultado == 1) {
    printf("Você venceu!\n");
}else {
    printf("Infelizmente você perdeu!\n");
}




}



