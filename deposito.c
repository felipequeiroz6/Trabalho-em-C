#include <stdio.h>
#include "deposito.h"
#include "historico.h"

// Implementacao da funcao de deposito
void realizarDeposito(float *saldo) {
    float valorDeposito; //função que inicia a variavel de dposito e faz sua função

    printf("\n--- Deposito ---\n");
    printf("Digite o valor a ser depositado: R$ ");
    scanf("%f", &valorDeposito);

    if (valorDeposito <= 0) {
        printf("Valor invalido! O deposito deve ser maior que zero.\n");
        return;
    }

    *saldo += valorDeposito;
    printf("Deposito realizado com sucesso!\n");
    printf("Novo saldo: R$ %.2f\n", *saldo);
    adicionarTransacao("Deposito", valorDeposito);
}


