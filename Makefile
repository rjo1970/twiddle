CFLAGS=-Wall -g

clean:
	rm -f twiddle.o
	rm -f ./test/twiddle_tests
	rm -f ./test/twiddle_tests.c

test: twiddle_tests
	./test/twiddle_tests

twiddle_tests: .checkmk
	cc ./test/twiddle_tests.c -g -lcheck -lc -o ./test/twiddle_tests

.checkmk:
	checkmk ./test/twiddle_tests.check > ./test/twiddle_tests.c
