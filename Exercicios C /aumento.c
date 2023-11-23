#include <stdio.h>

int main()
{
    int salario, novo, aumento, porcent;

    printf("Digite o salario da pessoa: ");
    scanf("%d", &salario);

    if (salario <= 1000)
    {
        novo =  salario + (salario * 0.2);
        aumento = novo  -  salario;
        printf("Novo salario: R$%d.00 \n", novo);
        printf("Aumento: R$%d.00\n", aumento);
        printf("Porcentagem: 20%%\n");
    }
    else if (salario > 1000 && salario <= 3000)
    {
        novo =  salario + (salario * 0.15);
        aumento = novo  -  salario;
        printf("Novo salario: R$%d.00 \n", novo);
        printf("Aumento: R$%d.00\n", aumento);
        printf("Porcentagem: 15%%\n");
    }
    else if (salario > 3000 && salario <= 8000)
    {
        novo =  salario + (salario * 0.1);
        aumento = novo  -  salario;
        printf("Novo salario: R$%d.00 \n", novo);
        printf("Aumento: R$%d.00\n", aumento);
        printf("Porcentagem: 10%%\n");
    }
    else
    {
        novo =  salario + (salario * 0.05);
        aumento = novo  -  salario;
        printf("Novo salario: R$%d.00 \n", novo);
        printf("Aumento: R$%d.00\n", aumento);
        printf("Porcentagem: 05%%\n");
    }

    return 0;   
}