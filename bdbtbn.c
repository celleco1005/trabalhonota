# include <stdio.h>

main()
{
    int hora;
    
    printf ("\n\nENTRE COM A HORA\n\n");
    
    scanf ("%d", &hora);
    
    if (hora > 0 && hora < 12)
    {
    printf ("\n\nBOM DIA");
    }
    else if
    (hora >12 && hora <18)
    {
        printf ("\n\nBOA TARDE\n\n");
    }
    else
    printf ("BOANOITE");
    return (0);
}