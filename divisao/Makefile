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


all: report

divi%.o: $(addprefix $(SRC_DIR)/, divi%.c) $(addprefix $(SRC_DIR)/, divi.h)
	$(CC) $(CFLAGS) $(PROFILE_FLAGS) $<

check_divi.o: $(TST_FILES)
	$(CC) $(CFLAGS) $(PROFILE_FLAGS)  $(TST_FILES) 

check_divi%: divi%.o check_divi.o
	$(CC) $< check_divi.o $(TST_LIBS) $(COV_LIBS) -o check_divi_runner

test: check_divi_runner
	-./check_divi_runner

report: test
	$(GCOV) $(GCONV_FLAGS) -o coverage_report.html

.PHONY: clean all

clean:
	-rm *.o *.html *.css *.gcda *.gcno check_divi_runner
