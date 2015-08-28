OBJS = main.o StrategyReturn.o StrategyNormal.o StrategySale.o FactoryCreate.o Strategy.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
FILES = $(shell find ./ -name "*.cpp")
TARGET = ./strategy
strategy : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o strategy

main.o: main.cpp FactoryCreate.h
	$(CC) $(CFLAGS) main.cpp

Strategy.o: Strategy.h Strategy.cpp
	$(CC) $(CFLAGS) Strategy.cpp

FactoryCreate.o: FactoryCreate.h FactoryCreate.cpp StrategyReturn.h StrategyNormal.h StrategySale.h
	$(CC) $(CFLAGS) FactoryCreate.cpp

StrategyReturn.o: StrategyReturn.h StrategyReturn.cpp Strategy.h
	$(CC) $(CFLAGS) StrategyReturn.cpp

StrategyNormal.o: StrategyNormal.cpp StrategyNormal.h Strategy.h
	$(CC) $(CFLAGS) StrategyNormal.cpp

StrategySale.o: StrategySale.h StrategySale.cpp Strategy.h
	$(CC) $(CFLAGS) StrategySale.cpp

.PHONY: clean
clean:
	-rm -rf strategy *.o *~

depend: 
	makedepend -- $(CFLAGS) -- $(FILES)
