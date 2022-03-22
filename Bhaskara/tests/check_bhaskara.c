#include <check.h>
#include <stdlib.h>
#include <math.h>
#include "../src/ bhaskara.h"

/**
*Caso de Teste 01
*Este conjunto de teste é referente ao cenário mais simples e intuitivo possível,
*são inseridos dados óbvios que dificilmente falharão.
**/
START_TEST(test_bhaskara_01) {
  ck_assert_int_eq(bhaskara(-1,2,3),-1,3);
} END_TEST 

/**
*Caso de Teste 02
*Conjunto de valores de entrada similar ao do Caso de Teste 01, entretanto.
**/
START_TEST(test_bhaskara_02) {
  ck_assert_int_eq(bhaskara(2,0,-18),3,-3);
} END_TEST 

/**
*Caso de Teste 03
*Caso de teste em que o delta é igual a zero, fato que caracteriza as raízes iguais.
*Não é necessário nenhuma outra implementação pois o algoritmo atende essa condição.
**/
START_TEST(test_bhaskara_03) {
  ck_assert_int_eq(bhaskara(-2,20,-50),5,5);
} END_TEST 

/**
*Caso de Teste 04
*Caso de teste que valida a possibilidade do delta ser negativo.
**/
START_TEST(test_bhaskara_04) {
  ck_assert_int_eq(bhaskara(1,-4,10),"A equação não possui raízes reais!");
} END_TEST 

/**
*Caso de Teste 05
*Caso de teste que valida a possibilidade do delta ser negativo.
*
**/
START_TEST(test_bhaskara_05) {
  ck_assert_int_eq(bhaskara(10,20,30),"A equação não possui raízes reais!");
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