#include <stdio.h>

// Fun��o para calcular o m�ximo divisor comum (MDC)
int mdc(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Fun��o para simplificar uma fra��o
void simplificar(int *numerador, int *denominador) {
    int divisor = mdc(*numerador, *denominador);
    *numerador /= divisor;
    *denominador /= divisor;
}

// Fun��o para adicionar duas fra��es
void adicionar(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    *res_num = num1 * den2 + num2 * den1;
    *res_den = den1 * den2;
    simplificar(res_num, res_den);
}

// Fun��o para subtrair duas fra��es
void subtrair(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    *res_num = num1 * den2 - num2 * den1;
    *res_den = den1 * den2;
    simplificar(res_num, res_den);
}

// Fun��o para multiplicar duas fra��es
void multiplicar(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    *res_num = num1 * num2;
    *res_den = den1 * den2;
    simplificar(res_num, res_den);
}

// Fun��o para dividir duas fra��es
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
        printf("1. Adi��o\n");
        printf("2. Subtra��o\n");
        printf("3. Multiplica��o\n");
        printf("4. Divis�o\n");
        printf("5. Sair\n");

        printf("Digite sua lasanha (1/2/3/4/5): ");
        scanf("%d", &escolha);

        if (escolha == 5) {
            break;
        }

        printf("Digite a primeira fra��o (numerador e denominador): ");
        scanf("%d/%d", &num1, &den1);
        printf("Digite a segunda fra��o (numerador e denominador): ");
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
            printf("Escolha inv�lida\n");
            break;
        }
    }

    return 0;
}
