PROJS=main
CC=gcc
CFLAGS=-m64
all: $(PROJS)
@echo Done!
$(PROJS):
$(CC) $(CFLAGS) -o $@ $(@:=.c)
