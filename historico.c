#include <stdio.h>
#include <string.h>
#include "historico.h"

#define MAX_TRANSACOES 100 // Limite maximo de transacoes no historico

// Variaveis globais para o historico de transacoes
Transacao historico[MAX_TRANSACOES];
int numTransacoes = 0;

// Implementacao da funcao para adicionar uma transacao ao historico
void adicionarTransacao(const char *tipo, float valor) {
    if (numTransacoes < MAX_TRANSACOES) {
        strcpy(historico[numTransacoes].tipo, tipo);
        historico[numTransacoes].valor = valor;
        numTransacoes++;
    } else {
        printf("Historico cheio. Nao e possivel adicionar mais transacoes.\n");
    }
}

// Implementacao da funcao para exibir o historico de transacoes
void exibirHistorico() {
    printf("\n--- Historico de Transacoes ---\n");
    if (numTransacoes == 0) {
        printf("Nenhuma transacao registrada ainda.\n");
    } else {
        for (int i = 0; i < numTransacoes; i++) {
            printf("%s: R$ %.2f\n", historico[i].tipo, historico[i].valor);
        }
    }
}


