all: master_slave1.o master_slave1_async_cancellation.o master_slave1_async_cancellation_cleanup_handlers.o master_slave1_deferred_cancellation.o
	gcc master_slave1.o -o master_slave1 -lpthread
	gcc master_slave1_async_cancellation.o -o master_slave1_async_cancellation -lpthread
	gcc master_slave1_async_cancellation_cleanup_handlers.o -o master_slave1_async_cancellation_cleanup_handlers -lpthread
	gcc master_slave1_deferred_cancellation.o -o master_slave1_deferred_cancellation.exe -lpthread

master_slave1.o: master_slave1.c
	gcc $< -c $@

master_slave1_async_cancellation.o: master_slave1_async_cancellation.c
	gcc $< -c $@

master_slave1_async_cancellation_cleanup_handlers.o: master_slave1_async_cancellation_cleanup_handlers.c
	gcc $< -c $@

master_slave1_deferred_cancellation.o: master_slave1_deferred_cancellation.c
	gcc $< -c $@

.PHONY:

clean:
	rm *.o master_slave1* master_slave1_async_cancellation* master_slave1_async_cancellation_cleanup_handlers* master_slave1_deferred_cancellation*