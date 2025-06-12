#ifndef HISTORICO_H
#define HISTORICO_H

// Definicao da estrutura para uma transacao
typedef struct {
    char tipo[20]; // "Deposito" ou "Saque"
    float valor;
} Transacao;

// Prototipos das funcoes do historico
void adicionarTransacao(const char *tipo, float valor);
void exibirHistorico();

#endif // HISTORICO_H


