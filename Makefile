all: creditcard

LDFLAGS=-lforms

creditcard: creditcard.c creditcard_cb.c creditcard.h creditcard_main.c

clean:
	rm -f creditcard
