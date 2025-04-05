#include <stdio.h>
#include <string.h>

void fazerPergunta(const char *pergunta, char *resposta) {
    printf("%s (sim/nao): ", pergunta);
    scanf("%s", resposta);
}

int main() {
    char resposta[4];
    int depressao = 0, ansiedade = 0, estresse = 0;

    printf("Bem-vindo ao Detector de Doenças Mentais\n");
    printf("Por favor, responda as seguintes perguntas com 'sim' ou 'nao'.\n");

    // Perguntas relacionadas à depressão
    fazerPergunta("Você se sente triste ou deprimido frequentemente?", resposta);
    if (strcmp(resposta, "sim") == 0) depressao++;

    fazerPergunta("Você perdeu o interesse nas atividades que costumava gostar?", resposta);
    if (strcmp(resposta, "sim") == 0) depressao++;

    fazerPergunta("Você se sente sem energia ou fatigado?", resposta);
    if (strcmp(resposta, "sim") == 0) depressao++;

    fazerPergunta("Você tem dificuldades para tomar decisões?", resposta);
    if (strcmp(resposta, "sim") == 0) depressao++;

    // Perguntas relacionadas à ansiedade
    fazerPergunta("Você se sente ansioso ou preocupado frequentemente?", resposta);
    if (strcmp(resposta, "sim") == 0) ansiedade++;

    fazerPergunta("Você tem dificuldades para relaxar?", resposta);
    if (strcmp(resposta, "sim") == 0) ansiedade++;

    fazerPergunta("Você sente palpitações ou aumento da frequência cardíaca?", resposta);
    if (strcmp(resposta, "sim") == 0) ansiedade++;

    fazerPergunta("Você tem dificuldades para dormir devido a preocupações?", resposta);
    if (strcmp(resposta, "sim") == 0) ansiedade++;

    // Perguntas relacionadas ao estresse
    fazerPergunta("Você sente que está sob muita pressão?", resposta);
    if (strcmp(resposta, "sim") == 0) estresse++;

    fazerPergunta("Você tem dificuldades para lidar com as responsabilidades diárias?", resposta);
    if (strcmp(resposta, "sim") == 0) estresse++;

    fazerPergunta("Você sente irritabilidade ou frustração frequente?", resposta);
    if (strcmp(resposta, "sim") == 0) estresse++;

    fazerPergunta("Você sente que não tem controle sobre sua vida?", resposta);
    if (strcmp(resposta, "sim") == 0) estresse++;

    // Resultados
    printf("\nResultado:\n");
    if (depressao > 2) {
        printf("Diagnóstico: Possíveis sinais de depressão.\n");
        printf("Recomendação: Procure um profissional de saúde mental para uma avaliação mais detalhada.\n");
    } else if (ansiedade > 2) {
        printf("Diagnóstico: Possíveis sinais de ansiedade.\n");
        printf("Recomendação: Procure um profissional de saúde mental para uma avaliação mais detalhada.\n");
    } else if (estresse > 2) {
        printf("Diagnóstico: Possíveis sinais de estresse.\n");
        printf("Recomendação: Procure um profissional de saúde mental para uma avaliação mais detalhada.\n");
    } else {
        printf("Você parece estar bem. Continue cuidando de sua saúde mental.\n");
    }

    return 0;
}
