CFLAGS = -g   -Wall -O2  -I./include -I./lib -DPRINT

LIBS = -lc -lulfius -lorcania  -lyder -ljansson -lm -lpthread -liniparser

LIBS += `pkg-config --cflags --libs libmongoc-1.0`

OUTPUT = libstudent.so

VERSION = 1.0

CC = gcc

MY_LIB = libstudent.so

STUDENT_SOURCE = ./src/student.c   \
				 ./src/insert.c    \
				 ./src/del.c       \
				 ./src/create.c     \
				 ./src/common.c

STUDENT_O_SOURCE = ./src/student.o   \
				 ./src/insert.o    \
				 ./src/del.o       \
				 ./src/create.o     \
				 ./src/common.o				

all: student libstudent.so

libstudent.so:
	gcc -shared -fpic -o libstudent.so $(STUDENT_SOURCE)  $(CFLAGS)  $(LIBS)  
	ln -n  $(OUTPUT) $(OUTPUT).$(VERSION)

student: $(STUDENT_SOURCE)
	$(CC) -o $@  $^  $(CFLAGS) $(LIBS) -DRELEASE

clean:
	rm -rf  student .*.swp *~ *.swp 
	rm  -rf $(OUTPUT) $(OUTPUT).$(VERSION)  student ./src/*.o

install: 
	cp -a student /usr/sbin

