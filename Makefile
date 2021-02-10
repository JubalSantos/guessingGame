all: oracle player

oracle: oracle.c
	gcc -o oracle oracle.c

player: player.c
	gcc -o player player.c


.PHONY: test clean

test: player oracle
	pytest-3 tests.py

clean:
	rm -f oracle player *.o *.pyc
