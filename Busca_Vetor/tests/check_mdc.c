#include <check.h>
#include <stdlib.h>
#include "../src/busca_vetor.h"

/**
*Caso de Teste 01
*Este conjunto de teste é referente ao cenário mais simples e intuitivo possível,
*são inseridos dados óbvios que dificilmente falharão.
**/
START_TEST(test_busca_vetor_01) {
  ck_assert_int_eq(busca_vetor(2,10),2);
} END_TEST 

/**
*Caso de Teste 02
*É o mesmo conjunto de valores de entrada do Caso de Teste 01, entretanto, em ordem invertida.
*Esse Caso de Teste busca avaliar se a função terá o mesmo resultado com a inversão de valores de entrada.
**/
START_TEST(test_mdc_02) {
  ck_assert_int_eq(mdc(10,2),2);
} END_TEST 

/**
*Caso de Teste 03
*Caso de teste que valida a possibilidade dos dados de entrada serem números primos.
**/
START_TEST(test_mdc_03) {
  ck_assert_int_eq(mdc(5,2),1);
} END_TEST 

/**
*Caso de Teste 04
*Caso de teste que valida a possibilidade de um dos dados de entrada ser zero.
**/
START_TEST(test_mdc_04) {
  ck_assert_int_eq(mdc(0,2),0);
} END_TEST 

/**
*Caso de Teste 05
*Caso de teste que valida a possibilidade de um dos dados de entrada ser negativo.
**/
START_TEST(test_mdc_05) {
  ck_assert_int_eq(mdc(4,-2),2);
} END_TEST 

Suite *mdc_suite(void) { 
  Suite *s;
  TCase *tc_core;

  s = suite_create("Mdc");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_mdc_01);
  suite_add_tcase(s, tc_core); 

  tcase_add_test(tc_core, test_mdc_02);
  suite_add_tcase(s, tc_core); 
  
  tcase_add_test(tc_core, test_mdc_03);
  suite_add_tcase(s, tc_core); 
 
  tcase_add_test(tc_core, test_mdc_04);
  suite_add_tcase(s, tc_core); 
  
  tcase_add_test(tc_core, test_mdc_05);   
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