CC = gcc
LIB = -lpthread
RM = rm -f
OBJ = master_slave1.o \
	master_slave1_async_cancellation.o \
 	master_slave1_async_cancellation_cleanup_handlers.o \
	master_slave1_deferred_cancellation.o
EXE = master_slave1 \
	master_slave1_async_cancellation \
	master_slave1_async_cancellation_cleanup_handlers \
	master_slave1_deferred_cancellation

all: $(OBJ)
	$(CC) master_slave1.o -o master_slave1 $(LIB)
	$(CC) master_slave1_async_cancellation.o -o master_slave1_async_cancellation $(LIB)
	$(CC) master_slave1_async_cancellation_cleanup_handlers.o -o master_slave1_async_cancellation_cleanup_handlers $(LIB)
	$(CC) master_slave1_deferred_cancellation.o -o master_slave1_deferred_cancellation $(LIB)

%.o: %.c
	$(CC) -c $< -o $@

.PHONY:

clean:
	$(RM) $(OBJ) $(EXE) 