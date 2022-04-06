#include <check.h>
#include <stdlib.h>
#include <math.h>
#include "../src/bhaskara.h"

/**
*Caso de Teste 01
*Este conjunto de teste é referente ao cenário mais simples e intuitivo possível,
*são inseridos dados óbvios que dificilmente falharão.
**/
START_TEST(test_bhaskara_01) {
  int raiz1, raiz2;	
  ck_assert_int_eq(bhaskara(-1,2,3,&raiz1,&raiz2),2);
} END_TEST 

/**
*Caso de Teste 02
*Conjunto de valores de entrada similar ao do Caso de Teste 01, entretanto, com valores diferentes.
**/
START_TEST(test_bhaskara_02) {
  int raiz1, raiz2;
  ck_assert_int_eq(bhaskara(2,0,-18,&raiz1,&raiz2),2);
} END_TEST 

/**
*Caso de Teste 03
*Caso de teste em que o delta é igual a zero, fato que caracteriza as raízes iguais.
*Não é necessário nenhuma outra implementação pois o algoritmo atende essa condição.
**/
START_TEST(test_bhaskara_03) {
  int raiz1, raiz2;
  ck_assert_int_eq(bhaskara(-2,20,-50,&raiz1,&raiz2),2);
} END_TEST 

/**
*Caso de Teste 04
*Caso de teste que valida a possibilidade do delta ser negativo.
**/
START_TEST(test_bhaskara_04) {
  ck_assert_int_eq(bhaskara(1,-4,10,0,0),-1);
} END_TEST 

/**
*Caso de Teste 05
*Caso de teste que valida a possibilidade do parametro 'A' ser igual a zero (equa��o do primeiro grau).
*
**/
START_TEST(test_bhaskara_05) {
  ck_assert_int_eq(bhaskara(0,2,3,0,0),1);
} END_TEST 

Suite *mdc_suite(void) { 
  Suite *s;
  TCase *tc_core;

  s = suite_create("Bhaskara");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_bhaskara_01);
  suite_add_tcase(s, tc_core); 

  tcase_add_test(tc_core, test_bhaskara_02);
  suite_add_tcase(s, tc_core); 
  
  tcase_add_test(tc_core, test_bhaskara_03);
  suite_add_tcase(s, tc_core); 
 
  tcase_add_test(tc_core, test_bhaskara_04);
  suite_add_tcase(s, tc_core); 
  
  tcase_add_test(tc_core, test_bhaskara_05);   
  suite_add_tcase(s, tc_core); 

  return s;
} 

int main(void) {
  int no_failed = 0;
  Suite *s;
  SRunner *runner;

  s = mdc_suite();
  runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL); 
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE; 
} 
