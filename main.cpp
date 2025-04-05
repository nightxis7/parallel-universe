#include <stdio.h>

// Função para calcular o máximo divisor comum (MDC)
int mdc(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Função para simplificar uma fração
void simplificar(int *numerador, int *denominador) {
    int divisor = mdc(*numerador, *denominador);
    *numerador /= divisor;
    *denominador /= divisor;
}

// Função para adicionar duas frações
void adicionar(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    *res_num = num1 * den2 + num2 * den1;
    *res_den = den1 * den2;
    simplificar(res_num, res_den);
}

// Função para subtrair duas frações
void subtrair(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    *res_num = num1 * den2 - num2 * den1;
    *res_den = den1 * den2;
    simplificar(res_num, res_den);
}

// Função para multiplicar duas frações
void multiplicar(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    *res_num = num1 * num2;
    *res_den = den1 * den2;
    simplificar(res_num, res_den);
}

// Função para dividir duas frações
void dividir(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    *res_num = num1 * den2;
    *res_den = den1 * num2;
    simplificar(res_num, res_den);
}

int main() {
    int escolha;
    int num1, den1, num2, den2;
    int res_num, res_den;

    while (1) {
        printf("Calculadora de Lasanhas\n");
        printf("Escolha a lasanha:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");

        printf("Digite sua lasanha (1/2/3/4/5): ");
        scanf("%d", &escolha);

        if (escolha == 5) {
            break;
        }

        printf("Digite a primeira fração (numerador e denominador): ");
        scanf("%d/%d", &num1, &den1);
        printf("Digite a segunda fração (numerador e denominador): ");
        scanf("%d/%d", &num2, &den2);

        switch (escolha) {
        case 1:
            adicionar(num1, den1, num2, den2, &res_num, &res_den);
            printf("Resultado: %d/%d + %d/%d = %d/%d\n", num1, den1, num2, den2, res_num, res_den);
            break;
        case 2:
            subtrair(num1, den1, num2, den2, &res_num, &res_den);
            printf("Resultado: %d/%d - %d/%d = %d/%d\n", num1, den1, num2, den2, res_num, res_den);
            break;
        case 3:
            multiplicar(num1, den1, num2, den2, &res_num, &res_den);
            printf("Resultado: %d/%d * %d/%d = %d/%d\n", num1, den1, num2, den2, res_num, res_den);
            break;
        case 4:
            dividir(num1, den1, num2, den2, &res_num, &res_den);
            printf("Resultado: %d/%d / %d/%d = %d/%d\n", num1, den1, num2, den2, res_num, res_den);
            break;
        default:
            printf("Escolha inválida\n");
            break;
        }
    }

    return 0;
}
