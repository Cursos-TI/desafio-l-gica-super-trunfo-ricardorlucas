#include <stdio.h>

int main() {
 int opcao;
 float nota1, nota2, media;

 printf("Menu de gerenciamento de estudantes\n");
 printf("1. Calcular média\n");
 printf("2. Determinar status\n");
 printf("3. Sair\n");
 printf("Escolha uma opção: ");
 scanf("%d", &opcao);

 switch (opcao) {

    case 1:
     printf("Calculando média.\n");
     printf("Digite sua primeira nota: ");
     scanf("%f", &nota1);
     printf("Digite sua segunda nota: ");
     scanf("%f", &nota2);
     if ( (nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) ) {
     media = (nota1 + nota2) / 2;
     printf("A média é %.1f\n", media);
     } else {
     printf("Entrada com valores de notas erradas");
     }
     break;
    
    case 2:
     printf("Determinar status\n");
     printf("Entrar com valor da média: ");
     scanf("%f", &media);
     //media >= 5 ? printf("Aprovado") : printf("Reprovado");
     if (media >= 7) {
     printf("Aprovado!");
     } else if (media >=5) {
        printf ("Recuperação!");
     }else {
        printf("Reprovado!");
     }     
     break;

    case 3:
     printf("Saindo do programa.\n");
     break;

    default:
     printf("Opção inválida\n");
     break;
    }

 }








