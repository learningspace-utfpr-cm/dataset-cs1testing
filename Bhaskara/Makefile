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

bhaskara%.o: $(addprefix $(SRC_DIR)/, bhaskara%.c) $(addprefix $(SRC_DIR)/, bhaskara.h)
	$(CC) $(CFLAGS) $(PROFILE_FLAGS) $<

check_bhaskara.o: $(TST_FILES)
	$(CC) $(CFLAGS) $(PROFILE_FLAGS) $(TST_FILES) 

check_bhaskara%: bhaskara%.o check_bhaskara.o
	$(CC) $< check_bhaskara.o $(TST_LIBS) $(COV_LIBS) -o check_bhaskara_runner

test: check_bhaskara_runner
	-./check_bhaskara_runner

report: test
	$(GCOV) $(GCONV_FLAGS) -o coverage_report.html

.PHONY: clean all

clean:
	-rm -f *.o *.html *.css *.gcda *.gcno check_bhaskara_runner
