#include<stdio.h>

int main ()

{
    float peso;
    float altura;
    float result;
    printf("\n\nEntre com o peso: ");
    scanf ("%f", &peso);
    printf ("\n\nEntre com a altura: ");
    scanf ("%f", &altura);
    altura=altura * altura;
    result = peso / altura;
    printf ("%f",result);
    
    
        if (result < 18.5)
          printf("voce esta abaixo do peso");
        
        if (result < 25)
          printf("\n\nSeu peso é normal");
        else
           printf("\n\nn voce esta uma baleia");
        
    return (0);
    
}