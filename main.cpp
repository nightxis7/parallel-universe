#include <stdio.h>
#include <string.h>

void fazerPergunta(const char *pergunta, char *resposta) {
    printf("%s (sim/nao): ", pergunta);
    scanf("%s", resposta);
}

int main() {
    char resposta[4];
    int depressao = 0, ansiedade = 0, estresse = 0;

    printf("Bem-vindo ao Detector de Doen�as Mentais\n");
    printf("Por favor, responda as seguintes perguntas com 'sim' ou 'nao'.\n");

    // Perguntas relacionadas � depress�o
    fazerPergunta("Voc� se sente triste ou deprimido frequentemente?", resposta);
    if (strcmp(resposta, "sim") == 0) depressao++;

    fazerPergunta("Voc� perdeu o interesse nas atividades que costumava gostar?", resposta);
    if (strcmp(resposta, "sim") == 0) depressao++;

    fazerPergunta("Voc� se sente sem energia ou fatigado?", resposta);
    if (strcmp(resposta, "sim") == 0) depressao++;

    fazerPergunta("Voc� tem dificuldades para tomar decis�es?", resposta);
    if (strcmp(resposta, "sim") == 0) depressao++;

    // Perguntas relacionadas � ansiedade
    fazerPergunta("Voc� se sente ansioso ou preocupado frequentemente?", resposta);
    if (strcmp(resposta, "sim") == 0) ansiedade++;

    fazerPergunta("Voc� tem dificuldades para relaxar?", resposta);
    if (strcmp(resposta, "sim") == 0) ansiedade++;

    fazerPergunta("Voc� sente palpita��es ou aumento da frequ�ncia card�aca?", resposta);
    if (strcmp(resposta, "sim") == 0) ansiedade++;

    fazerPergunta("Voc� tem dificuldades para dormir devido a preocupa��es?", resposta);
    if (strcmp(resposta, "sim") == 0) ansiedade++;

    // Perguntas relacionadas ao estresse
    fazerPergunta("Voc� sente que est� sob muita press�o?", resposta);
    if (strcmp(resposta, "sim") == 0) estresse++;

    fazerPergunta("Voc� tem dificuldades para lidar com as responsabilidades di�rias?", resposta);
    if (strcmp(resposta, "sim") == 0) estresse++;

    fazerPergunta("Voc� sente irritabilidade ou frustra��o frequente?", resposta);
    if (strcmp(resposta, "sim") == 0) estresse++;

    fazerPergunta("Voc� sente que n�o tem controle sobre sua vida?", resposta);
    if (strcmp(resposta, "sim") == 0) estresse++;

    // Resultados
    printf("\nResultado:\n");
    if (depressao > 2) {
        printf("Diagn�stico: Poss�veis sinais de depress�o.\n");
        printf("Recomenda��o: Procure um profissional de sa�de mental para uma avalia��o mais detalhada.\n");
    } else if (ansiedade > 2) {
        printf("Diagn�stico: Poss�veis sinais de ansiedade.\n");
        printf("Recomenda��o: Procure um profissional de sa�de mental para uma avalia��o mais detalhada.\n");
    } else if (estresse > 2) {
        printf("Diagn�stico: Poss�veis sinais de estresse.\n");
        printf("Recomenda��o: Procure um profissional de sa�de mental para uma avalia��o mais detalhada.\n");
    } else {
        printf("Voc� parece estar bem. Continue cuidando de sua sa�de mental.\n");
    }

    return 0;
}
