#include <stdio.h>           // Biblioteca padrão de entrada/saída, usada para printf e scanf
#include "deposito.h"        // Cabeçalho que declara a função de depósito
#include "historico.h"       // Cabeçalho da função que registra a transação no histórico

// Implementação da função que realiza um depósito na conta
void realizarDeposito(float *saldo) {
    
    float valorDeposito;    // Declara uma variável para armazenar o valor que será depositado

    // Exibe o título da operação de depósito
    printf("\n--- Deposito ---\n");

    // Solicita ao usuário que informe o valor a ser depositado
    printf("Digite o valor a ser depositado: R$ ");
    scanf("%f", &valorDeposito);   // Lê o valor digitado e armazena na variável valorDeposito

    // Verifica se o valor é válido (maior que zero)
    if (valorDeposito <= 0) {
        printf("Valor invalido! O deposito deve ser maior que zero.\n");
        return;     // Encerra a função sem alterar o saldo
    }

    // Atualiza o saldo com o valor depositado (usa ponteiro para alterar a variável original)
    *saldo += valorDeposito;

    // Informa ao usuário que o depósito foi realizado
    printf("Deposito realizado com sucesso!\n");

    // Mostra o novo saldo após o depósito
    printf("Novo saldo: R$ %.2f\n", *saldo);  // %.2f mostra o valor com duas casas decimais

    // Registra essa operação no histórico de transações
    adicionarTransacao("Deposito", valorDeposito);
}

// Felipe Queiroz
