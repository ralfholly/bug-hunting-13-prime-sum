CFLAGS := -Wextra -Wall -pedantic -ansi

run: prime_sum
	./prime_sum

prime_sum.o : prime_sum.c prime_table.h
prime_table.o : prime_table.c prime_table.h
prime_sum : prime_sum.o

clean:
	rm -rf prime_sum *.o
