OBJS = main.o division.o multiplication.o addition.o subtraction.o OperationFactory.o calculation.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
TARGET = ./calculation
calculation : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o calculation
	chmod a+x $(TARGET)

main.o: main.cpp OperationFactory.h
	$(CC) $(CFLAGS) main.cpp

OperationFactory.o: OperationFactory.h OperationFactory.cpp division.h addition.h multiplication.h subtraction.h
	$(CC) $(CFLAGS) OperationFactory.cpp

calculation.o: calculation.h calculation.cpp
	$(CC) $(CFLAGS) calculation.cpp

division.o: division.cpp division.h calculation.h
	$(CC) $(CFLAGS) division.cpp

multiplication.o: multiplication.cpp multiplication.h calculation.h
	$(CC) $(CFLAGS) multiplication.cpp

addition.o: addition.cpp addition.h calculation.h
	$(CC) $(CFLAGS) addition.cpp

subtraction.o: subtraction.cpp subtraction.h calculation.h
	$(CC) $(CFLAGS) subtraction.cpp

.PHONY: clean
clean:
	-rm -rf calculation *.o *~