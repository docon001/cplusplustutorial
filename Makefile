OBJS = text_test.o phone_number_test.o test.o text.o phone_number.o 
CC = g++ -std=c++11
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
SOURCEDIR = code/source
HEADERDIR = code/header
TESTDIR = test

tests: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o tests
	
text_test.o: $(HEADERDIR)/phone_number.h $(HEADERDIR)/text.h $(TESTDIR)/text_test.cpp
	$(CC) $(CFLAGS) $(TESTDIR)/text_test.cpp
	
phone_number_test.o: $(HEADERDIR)/phone_number.h $(TESTDIR)/phone_number_test.cpp ../catch.hpp
	$(CC) $(CFLAGS) $(TESTDIR)/phone_number_test.cpp
	
test.o: $(TESTDIR)/test.cpp
	$(CC) $(CFLAGS) $(TESTDIR)/test.cpp
	
text.o: $(HEADERDIR)/phone_number.h $(HEADERDIR)/text.h $(SOURCEDIR)/text.cpp
	$(CC) $(CFLAGS) $(SOURCEDIR)/text.cpp
	
phone_number.o: $(HEADERDIR)/phone_number.h $(SOURCEDIR)/phone_number.cpp
	$(CC) $(CFLAGS) $(SOURCEDIR)/phone_number.cpp
	
clean:
	\rm *.o *~ tests