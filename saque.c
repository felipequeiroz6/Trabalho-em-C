#include <stdio.h>
#include "saque.h"
#include "historico.h"

// Implementacao da funcao de saque
int realizarSaque(float *saldo, float valorSaque) {
    if (valorSaque <= 0) {
        printf("Valor invalido! O saque deve ser maior que zero.\n");
        return 0;
    }
    if (valorSaque > *saldo) {
        printf("Operacao falhou: Saldo insuficiente para sacar R$ %.2f.\n", valorSaque);
        return 0;
    } else {
        *saldo -= valorSaque;
        printf("Saque realizado com sucesso!\n");
        printf("Seu novo saldo e: R$ %.2f\n", *saldo);
        adicionarTransacao("Saque", valorSaque);
        return 1;
    }
}
//gabriel

