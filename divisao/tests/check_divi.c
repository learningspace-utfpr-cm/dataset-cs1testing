#include <check.h>
#include <stdlib.h>
#include "../src/divi.h"

START_TEST(test_divi_01) {
  ck_assert_int_eq(divi(10,2),5);
} END_TEST 

START_TEST(test_divi_02) {
  ck_assert_int_eq(divi(9,3),3);
} END_TEST 

START_TEST(test_divi_03) {
  ck_assert_int_eq(divi(10,0),0);
} END_TEST 


START_TEST(test_divi_04) {
  ck_assert_int_eq(divi(10,4),2);
} END_TEST 

START_TEST(test_divi_05) {
  ck_assert_int_eq(divi(8,2),4);
} END_TEST 

Suite *divi_suite(void) { 
  Suite *s;
  TCase *tc_core;

  s = suite_create("divi");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_divi_01);
  suite_add_tcase(s, tc_core); 

  tcase_add_test(tc_core, test_divi_02);
  suite_add_tcase(s, tc_core); 
  
  tcase_add_test(tc_core, test_divi_03);
  suite_add_tcase(s, tc_core); 
 
  tcase_add_test(tc_core, test_divi_04);
  suite_add_tcase(s, tc_core); 
  
  tcase_add_test(tc_core, test_divi_05);   
  suite_add_tcase(s, tc_core); 

  return s;
} 

int main(void) {
  int no_failed = 0;
  Suite *s;
  SRunner *runner;

  s = divi_suite();
  runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL); 
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE; 
} 




