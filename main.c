#include <stdio.h>
#include <locale.h>
#include "login.h"
#include "saldo.h"
#include "deposito.h"
#include "saque.h"
#include "historico.h"

// Variavel global para o saldo da conta
float saldoConta = 1000.00; // Saldo inicial de exemplo

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int opcao;
    float valor;

    printf("-------------------------------------\n");
    printf("Bem-vindo ao Caixa Eletronico Virtual!\n");
    printf("-------------------------------------\n");

    // Tenta fazer o login
    if (!verificarLogin()) {
        printf("Tentativas de login esgotadas. Encerrando o programa.\n");
        return 1; // Sai do programa se o login falhar
    }

    do {
        printf("\n--- Menu Principal ---\n");
        printf("1. Consultar Saldo\n");
        printf("2. Realizar Deposito\n");
        printf("3. Realizar Saque\n");
        printf("4. Exibir Historico\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                consultarSaldo(saldoConta);
                break;
            case 2:
                realizarDeposito(&saldoConta);
                break;
            case 3:
                printf("\n--- Saque ---\n");
                printf("Digite o valor a ser sacado: R$ ");
                scanf("%f", &valor);
                realizarSaque(&saldoConta, valor);
                break;
            case 4:
                exibirHistorico();
                break;
            case 5:
                printf("Obrigado por usar nosso caixa eletronico!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}


