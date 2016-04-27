#include <stdio.h>

int main()

{
    float av1;
    float av2;
    float media;
    
    printf("\n\n Entre com AV1: ");
    scanf("%f",&av1);
    printf("\n\n Entre com AV2: ");
    scanf("%f",&av2);
    media= (av1 + av2) / 2;
    printf ("\n\n\%f Essa é a sua Media\n\n",media);
    
    if (media < 5)
   
        printf ("\n\n VOCE ESTA NA AV3\n\n");
    
    if (media > 5.1 && media < 6.9)
    
        printf ("\n\n VOCE ESTA DE RECUPERAÇÃO\n\n");
    
    else 
        printf ("\n\n PARABENS VOCE FOI APROVADO");
   
    return(0);
    
}

