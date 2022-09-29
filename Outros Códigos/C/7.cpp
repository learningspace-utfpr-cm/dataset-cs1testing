#include <stdio.h>

main()
{
    float c,f;
    printf ("Digite uma temperatura em Fahrenheit:");
    scanf ("%f",&f);
    c=(f-32)*(5.0/9);
    printf ("A temperatura em graus Celsius e %f ",c);
    if (c<19)
    {
        printf ("Frio");
    }
    else if (19<=c<=27)
    {
        printf ("Agradavel");
    }
    else
    {
        printf ("Calor");
    }
}

