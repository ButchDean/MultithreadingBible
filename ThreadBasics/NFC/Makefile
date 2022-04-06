CC = gcc
LIB = -lpthread
RM = rm -f
OBJ = gluethread/glthread.o *.o
OBJDEPS = rtm_publisher.o threaded_subsciber.o utils.o rt.o notif.o gluethread/glthread.o
EXE = notificationchain

all: $(OBJDEPS)
	$(CC) $(OBJDEPS) -o $(EXE) $(LIB)

gluethread/%.o: gluethread/%.c
	$(CC) -c $< -o $@

%.o: %.c
	$(CC) -c $< -o $@

.PHONY:

clean:
	$(RM) $(OBJ) $(EXE) 