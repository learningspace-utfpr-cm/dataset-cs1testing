#include <stdio.h>
#include <math.h>
main ()
 {
  float R, A, V;
  printf ("Calculo do Volume de um Cilindro\n\n");
  printf ("Digite o valor do raio da base do cilindro: ");
  scanf ("%f", &R);
printf ("Digite o valor da altura do cilindro: ");
  scanf ("%f", &A);
  V=3.14*pow(R,2)*A;
  printf ("O Volume do Cilindro ‚ igual a: %.2f", V);
 }

