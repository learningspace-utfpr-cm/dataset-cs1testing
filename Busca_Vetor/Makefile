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

busca_vetor%.o: $(addprefix $(SRC_DIR)/, busca_vetor%.c) $(addprefix $(SRC_DIR)/, busca_vetor.h)
	$(CC) $(CFLAGS) $(PROFILE_FLAGS) $<

check_busca_vetor.o: $(TST_FILES)
	$(CC) $(CFLAGS) $(PROFILE_FLAGS) $(TST_FILES) 

check_busca_vetor%: busca_vetor%.o check_busca_vetor.o
	$(CC) $< check_busca_vetor.o $(TST_LIBS) $(COV_LIBS) -o check_busca_vetor_runner

test: check_busca_vetor1
	-./check_busca_vetor_runner

report: test
	$(GCOV) $(GCONV_FLAGS) -o coverage_report.html

.PHONY: clean all

clean:
	-rm -f *.o *.html *.css *.gcda *.gcno check_busca_vetor_runner
