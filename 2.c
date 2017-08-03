#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioBruto,salarioLiquido;
    float INSS;
    printf("Digite o valor do salario:\n");
    scanf("%f",&salarioBruto);

    if(salarioBruto<=420)
    {
        INSS = salarioBruto * 0.08;
        printf(" desconto INSS = %.2f\n",INSS);
    }
    if (salarioBruto>= 420 && salarioBruto<=1350)
    {
        INSS = salarioBruto * 0.09;
        printf("desconto INSS = %.2f\n",INSS);
    }
    if (salarioBruto>1350)
    {
        INSS = salarioBruto * 0.1;
        printf("desconto INSS = %.2f\n",INSS);
    }

    salarioLiquido = salarioBruto - INSS;
    printf("salario liquido = %.2f\n",salarioLiquido);
    return 0;
}
