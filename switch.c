#include <stdio.h>

int main ()

{
    int num;
    printf ("digite um numero: ");
    scanf ("%d",&num);
    switch (num)
    {
        case 9:
            printf ("\n\n O numero é igual a nove.\n\n");
            break;
        case 10:
            printf ("\n\n O numero é igual a dez: \n\n");
            break;
        default:
            printf ("\n\n numero nao é nove nem 10\n\n");
            
    }
return (0);

}
