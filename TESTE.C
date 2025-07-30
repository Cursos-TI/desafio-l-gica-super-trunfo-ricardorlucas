#include <stdio.h>


int main() {

int opcao, agencia, conta, sair, agencia2, conta2;
float saldo = 300, deposito, saque;


printf("Bem-vindo ao sistema bancário!\n");
    printf("Digite o número da sua agência: ");
    scanf("%d", &agencia);
    printf("Digite o número da sua conta: ");
    scanf("%d", &conta);
printf(" \n\n");


printf("1. Consultar saldo\n");
printf("2. Realizar depósito\n");
printf("3. Realizar saque\n");
printf("4. Sair\n");
printf("Selecione uma opção: ");
scanf("%d", &opcao);

switch (opcao) {
case 1:
    printf("Você escolheu consultar saldo.\n");
    printf("Sua agência é: %d, sua conta: %d e seu saldo atual: %.2f\n\n", agencia, conta, saldo);
    printf("2. Realizar depósito\n");
    printf("3. Realizar saque\n");
    printf("4. Sair\n");
    printf("Selecione uma opção: ");
    scanf("%d", &opcao);
    
case 2:
    printf("Você escolheu realizar depósito.\n");
    printf("Sua agência é: %d, sua conta: %d, deseja realizar o depósito para qual conta? \n", agencia, conta);
    printf("Digite o número da agência: ");
    printf("\n");
    scanf("%d", &agencia2);
    printf("Digite o número da conta: ");
    scanf("%d", &conta2);
    printf("\n");

    printf("A agência digitada é: %d e a conta é: %d\n", agencia2, conta2);
    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);
    printf("Depósito realizado com sucesso! saldo depositado: %.2f\n\n", deposito);

    printf("3. Realizar saque\n");
    printf("4. Sair\n");
    printf("Selecione uma opção: ");
    scanf("%d", &opcao, &sair);
    break;
case 3:
 printf("Sua agência é: %d, sua conta: %d, saldo: %.2f. Deseja realizar qual o valor de saque: ", agencia, conta, saldo);
scanf("%f", &saque);

printf(" \n\n");

if (saque > saldo) {
    printf("Saldo insuficiente para realizar o saque.\n");
} else {
    saldo -= saque;
    printf("Saque realizado com sucesso! Saldo restante: %.2f\n\n", saldo);
}
    printf("Digite 4 para sair: ");
    scanf("%d", &opcao);


printf(" \n\n");

case 4:
    printf("Você escolheu sair do sistema bancário. Obrigado por usar nossos serviços!\n");
    
    
    default:
    printf("Opção inválida! Por favor, selecione uma opção válida.\n");
    break;
    }
return 0;

}