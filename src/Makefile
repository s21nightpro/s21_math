CC = gcc
CFLAGS = -Wall -Werror -Wextra
 
all: clean s21_math.a test gcov_report

clean: 
	rm -rf *.o *.a *.html test

test: s21_math.a
	$(CC) $(CFLAGS) test.c s21_math.a -lm -o test
	./test
	
s21_math.a:
	$(CC) $(CFLAGS) s21_*.c
	ar rcs s21_math.a s21_*.o

gcov_report: s21_math.a
	$(CC) $(CFLAGS) --coverage test.c s21_math.a -lm -o gcov_test
	chmod +x gcov_test
	./gcov_test
	lcov -t "gcov_test" -o gcov_test.info --no-external -c -d .
	genhtml -o report/ gcov_test.info
	open ./report/index.html
