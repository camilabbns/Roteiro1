#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    float Psapato;
    float Pfinal;
    float desconto;
    printf("Digite sua idade:\n");
    scanf("%d",&idade);
    printf("Digite o preco do sapato:\n");
    scanf("%f",&Psapato);

    if (idade<= 18)
    {
        desconto = Psapato * 0.1;
        printf("valor do desconto = %.2f\n",desconto);
    }
    if(idade >18)
    {
       desconto = Psapato * 0.2;
        printf("valor do desconto = %.2f\n",desconto);
    }
    Pfinal = Psapato - desconto;
    printf("valor a pagar com desconto = %0.2f\n",Pfinal);
    return 0;
}
