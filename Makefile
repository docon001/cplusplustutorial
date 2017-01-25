OBJS = phone_number_test.o test.o phone_number.o
CC = g++ -std=c++11
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
SOURCEDIR = code/source
HEADERDIR = code/header
TESTDIR = test

tests: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o tests
	
phone_number_test.o: $(HEADERDIR)/phone_number.h $(TESTDIR)/phone_number_test.cpp ../catch.hpp
	$(CC) $(CFLAGS) $(TESTDIR)/phone_number_test.cpp
	
test.o: $(TESTDIR)/test.cpp
	$(CC) $(CFLAGS) $(TESTDIR)/test.cpp
	
phone_number.o: $(HEADERDIR)/phone_number.h $(SOURCEDIR)/phone_number.cpp
	$(CC) $(CFLAGS) $(SOURCEDIR)/phone_number.cpp
	
clean:
	\rm *.o *~ tests