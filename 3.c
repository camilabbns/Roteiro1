#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,b, maior;

    while(a!= 0)
    {
        b=a;
        scanf("%d",&a);

        if (a>b){
            maior=a;
        }else{
            maior =b;
            }
    }
    printf("maior = %d",maior);


    return 0;
}
