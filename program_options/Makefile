prefix=/usr/local
INCPATH=$(prefix)/include
LIBPATH=$(prefix)/lib

LIBS+=$(LIBPATH)/libboost_program_options-mt.a

all:
	g++ -O main.cpp -o main.bin $(LIBS)
