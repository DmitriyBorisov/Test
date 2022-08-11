CC = gcc
CFLAGS = -c -O0 -g3 -Wall -Wconversion
LDFLAGS =
SOURCES = main.c hello.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = hello	
OBJECT_FILES = *.o hello
TEMP_FILES = *~ *.bak 

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@
	
clean:
	rm -f $(OBJECT_FILES) $(TEMP_FILES)
