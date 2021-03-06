###############################################################################
# CPT220 - Advanced Programming Techniques                                  #
# Assessed lab 1 - debugging                                                  #
# Created by Paul Miller                                                      #
#                                                                             #
# Makefile for the assessed lab. Simply type 'make' (no quotes) to compile    #
# this project.                                                               #
###############################################################################

# The head files for this project
HEADERS=card.h hand.h poker.h input.h shared.h deck.h
# The object files that need to be built for this project
OBJECTS=card.o hand.o poker.o input.o deck.o
# The compiler we are using 
CC=gcc
# The compiler flags
CFLAGS=-ansi -Wall -pedantic
# The linker flags
LFLAGS=

# The default target is always first in the file - it just calls the 'poker' 
# target
all:poker

# This target calls the linker. It links together all the object files that 
# have been compiled along with any libraries that you have included.
poker: $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o poker

# compiles each .c file into a .o file
%.o:%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $<

# the debug target - if you type make debug, you will recompile your program,
# building in the debugging symbols for use with gdb and valgrind
debug:CFLAGS=-ansi -Wall -pedantic -g
debug:clean poker

sanitize:CFLAGS=-ansi -Wall -pedantic -fsanitize=address -g
sanitize:LFLAGS=-fsanitize=address
sanitize:clean all


# the clean target - deletes the object files and the executable
.PHONY:clean
clean:
	rm -f *.o poker *~
