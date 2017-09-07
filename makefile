# gcc is the compiler
CC = gcc

# Set compiler flags
CFLAGS = -g -Wall

# Run with 'make' or 'make kentinel'
default: kentinel

# Executable requires two object files
kentinel: src/kentinel.o src/init/init.o
			if [ ! -d ~/kentinel ]; then mkdir ~/kentinel ; fi
			if [ -d ~/kentinel ]; then $(CC) $(CFLAGS) -o ~/kentinel/kentinel src/kentinel.o src/init/init.o ; fi

kentinel.o: src/kentinel.c src/init/init.h
			$(CC) $(CFLAGS) -c src/kentinel.c

init.o: src/init/init.c
			$(CC) $(CFLAGS) -c src/init/init.c

# If you want to restart
clean:
			$(RM) kentinel *.o *~
