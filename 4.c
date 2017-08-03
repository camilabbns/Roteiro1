#include <stdio.h>
#include <stdlib.h>

int main()
{
    int E1=1,E2=1,novoE,n;
    int i=3;
    printf("Sequencia Fibonacci\n");

    printf("Digite o e-nesimo termo da sequencia ficbonacci:\n");
    scanf("%d",&n);
    printf("1o termo = %d\n",E1);
    printf("2o termo = %d\n",E2);

    for(i=3;i<= n;i++)
    {
        novoE= E1 + E2;
        printf("%.1do termo = %d\n",i,novoE);

        E1 = E2;
        E2 =novoE;
    }

    return 0;
}
