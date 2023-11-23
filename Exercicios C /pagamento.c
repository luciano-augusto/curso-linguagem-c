#include <stdio.h>
#include <string.h>

int main()
{
    char nome[20];
    double hora, valor, pagamento;

    printf("Nome: ");
    fgets(nome, 20, stdin);
    printf("Valor por hora: ");
    scanf("%lf", &valor);
    printf("Horas trabalhadas: ");
    scanf("%lf", &hora);

    pagamento = valor * hora;
    printf("O valor a ser pago para %s é de R$%.2lf. \n", nome, pagamento);
}