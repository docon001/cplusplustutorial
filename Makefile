OBJS = text_test.o phone_number_test.o data_test.o call_test.o bill_test.o \
	   test.o \
	   text.o phone_number.o data.o call.o bill.o
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
	
phone_number_test.o: $(HEADERDIR)/phone_number.h $(TESTDIR)/phone_number_test.cpp
	$(CC) $(CFLAGS) $(TESTDIR)/phone_number_test.cpp
	
data_test.o: $(HEADERDIR)/data.h $(TESTDIR)/data_test.cpp
	$(CC) $(CFLAGS) $(TESTDIR)/data_test.cpp
	
call_test.o: $(HEADERDIR)/call.h $(TESTDIR)/call_test.cpp
	$(CC) $(CFLAGS) $(TESTDIR)/call_test.cpp
	
bill_test.o: $(HEADERDIR)/bill.h $(TESTDIR)/bill_test.cpp
	$(CC) $(CFLAGS) $(TESTDIR)/bill_test.cpp
	
test.o: $(TESTDIR)/test.cpp
	$(CC) $(CFLAGS) $(TESTDIR)/test.cpp
	
text.o: $(HEADERDIR)/phone_number.h $(HEADERDIR)/text.h $(SOURCEDIR)/text.cpp
	$(CC) $(CFLAGS) $(SOURCEDIR)/text.cpp
	
phone_number.o: $(HEADERDIR)/phone_number.h $(SOURCEDIR)/phone_number.cpp
	$(CC) $(CFLAGS) $(SOURCEDIR)/phone_number.cpp
	
data.o: $(HEADERDIR)/data.h $(SOURCEDIR)/data.cpp
	$(CC) $(CFLAGS) $(SOURCEDIR)/data.cpp
	
call.o: $(HEADERDIR)/call.h $(SOURCEDIR)/call.cpp
	$(CC) $(CFLAGS) $(SOURCEDIR)/call.cpp
	
bill.o: $(HEADERDIR)/bill.h $(SOURCEDIR)/bill.cpp
	$(CC) $(CFLAGS) $(SOURCEDIR)/bill.cpp
	
clean:
	\rm *.o *~ tests