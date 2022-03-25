#include <check.h>
#include <stdlib.h>
#include "../src/busca_vetor.h"

//int Pesquisa_Sequencial(int Vetor[], int Valor, int tamanho_vetor)

/**
*Caso de Teste 01
*Este conjunto de teste é referente ao cenario mais simples e intuitivo possível,
*São inseridos dados óbvios que dificilmente falharão.
**/
START_TEST(test_busca_vetor_01) {
  ck_assert_int_eq(busca_vetor([1,2,3,4,5],3,5),2);
} END_TEST 

/**
*Caso de Teste 02
*Este conjunto de teste é referente ao cenario mais simples e intuitivo possível,
*São inseridos dados óbvios que dificilmente falharão.
**/
START_TEST(test_busca_vetor_02) {
  ck_assert_int_eq(busca_vetor([1,2,3,4,5],5,5),4);
} END_TEST 

/**
*Caso de Teste 03
*Caso de teste que que retorna "-1" caso o usuario entre o valor zero.
**/
START_TEST(test_busca_vetor_03) {
  ck_assert_int_eq(busca_vetor([1,2,3,4,5],0,5),-1);
} END_TEST 

/**
*Caso de Teste 04
*Caso de teste que que retorna "-1" caso o usuario entre um valor positivo que não esteja no vetor.
**/
START_TEST(test_busca_vetor_04) {
  ck_assert_int_eq(busca_vetor([1,2,3,4,5],6,5),-1);
} END_TEST 

/**
*Caso de Teste 05
*Caso de teste que que retorna "-1" caso o usuario entre um valor negativo que não esteja no vetor.
**/
START_TEST(test_busca_vetor_05) {
  ck_assert_int_eq(busca_vetor([1,2,3,4,5],-1,5),-1);
} END_TEST 

Suite *busca_vetor_suite(void) { 
  Suite *s;
  TCase *tc_core;

  s = suite_create("busca_vetor");
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

  s = busca_vetor_suite();
  runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL); 
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE; 
} 
