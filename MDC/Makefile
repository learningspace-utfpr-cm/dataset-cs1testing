CC = gcc
CFLAGS = -c -Wall
PROFILE_FLAGS = -fprofile-arcs -ftest-coverage
TST_LIBS = -lcheck -lm -lpthread -lrt -lsubunit
COV_LIBS = -lgcov -coverage
SRC_DIR= src
TST_DIR= tests
SRC_FILES = $(addprefix $(SRC_DIR)/, *.c) 
TST_FILES = $(addprefix $(TST_DIR)/, *.c)
GCOV = gcovr 
GCONV_FLAGS = -r . --html --html-details 


all: coverage_report.html

mdc%.o: $(addprefix $(SRC_DIR)/, mdc%.c) $(addprefix $(SRC_DIR)/, mdc.h)
	$(CC) $(CFLAGS) $(PROFILE_FLAGS) $<

check_mdc.o: $(TST_FILES)
	$(CC) $(CFLAGS) $(PROFILE_FLAGS) $(TST_FILES) 

check_mdc_tests%: mdc%.o check_mdc.o
	$(CC) $< check_mdc.o $(TST_LIBS) $(COV_LIBS) -o check_mdc_tests

test: check_mdc_tests
	./check_mdc_tests

coverage_report.html: test
	$(GCOV) $(GCONV_FLAGS) -o coverage_report.html

.PHONY: clean all

clean:
	-rm *.o *.html *.gcda *.gcno check_mdc_tests
