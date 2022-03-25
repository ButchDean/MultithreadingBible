all:   
	gcc master_slave1.o -o master_slave1 -lpthread
	gcc master_slave1_async_cancellation.o -o master_slave1_async_cancellation -lpthread
	gcc master_slave1_async_cancellation_cleanup_handlers.o -o master_slave1_async_cancellation_cleanup_handlers -lpthread
	gcc master_slave1_deferred_cancellation.o -o master_slave1_deferred_cancellation.exe -lpthread

%.o: %.c
	gcc -c $< -o $@

.PHONY:

clean:
	rm -f *.o master_slave1* master_slave1_async_cancellation* master_slave1_async_cancellation_cleanup_handlers* master_slave1_deferred_cancellation*