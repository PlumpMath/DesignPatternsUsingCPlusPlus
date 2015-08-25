OBJS = main.o calculation.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
TARGET = ./calculation
calculation : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o calculation
	chmod a+x $(TARGET)
main.o: calculation.h main.cpp
	$(CC) $(CFLAGS) main.cpp
calculation.o: calculation.h calculation.cpp
	$(CC) $(CFLAGS) calculation.cpp
.PHONY: clean
clean:
	-rm -rf calculation *.o *~

