prefix=/usr/local
LIBPATH=$(prefix)/lib

LIBS+=$(LIBPATH)/libboost_filesystem-mt.a
LIBS+=$(LIBPATH)/libboost_system-mt.a

all:
	g++ -O main.cpp -o main.bin $(LIBS)
