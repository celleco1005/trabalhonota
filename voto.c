#include <stdio.h>

main()

{
    int idade;
    
    printf ("\n\n ENTRE COM A SUA IDADE:");
    
    scanf ("%d", &idade);
    
    if (idade < 16)
    
    {
    printf ("\n\n\nVOCE NAO PODE VOTAR");
    }
    else if (idade == 16 || idade == 17 || idade > 70)
    {
    printf ("SEU VOTO É FACULTATIVO");
    }
    else
    {
    printf ("\n\n\nSEU VOTO É OBRIGATORIO\n\n\n");
    }
        
    return (0);
    
   }