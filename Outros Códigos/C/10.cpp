#include <stdio.h>
main ()
 {
  float venda, comissao, portentagem;
  printf ("Digite o valor da venda: ");
  scanf ("%f", &venda);
  printf ("Digite o valor da comissao da venda: ");
  scanf ("%f", &portentagem);
  comissao = venda * (portentagem/100);
  printf ("Comissao da venda: %f",comissao);
}
  
  
