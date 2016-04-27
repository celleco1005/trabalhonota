#include <stdio.h>

int square (int x) /*calcula o quadrado de x*/

{
    printf ("o quadrado de %d", (x*x));
    return (0);
}

int main ()

{
    int num;
    printf ("entre com o numero: ");
    scanf ("%d",&num);
    printf ("\n\n");
    square (num);
    printf("\n\n");
    
    return(0);
}
