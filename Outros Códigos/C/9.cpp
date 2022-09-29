#include <stdio.h>
main ()
 {
  float bitcoin, dolar, real;
  printf ("Digite o valor da cotacao do dolar: ");
  scanf ("%f", &dolar);
  printf ("Digite o valor da cotacao do bitcoin em dolar: ");
  scanf ("%f", &bitcoin);
  real = bitcoin * dolar;
  printf ("Bitcoin em Reais: %f",real);
}
