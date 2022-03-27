#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>

#define MAX_THREADS 16

static void* callback(void* arg) {

    int* num = calloc(1, sizeof(int));
    *num = *(int*)arg++;

    return (void *)num;
}

/* Thread setup facilitators */
void create_thread(pthread_t* pthread_handle, int t_id) {

    pthread_attr_t attr;

    pthread_attr_init(&attr);

    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    int rc = pthread_create(pthread_handle, &attr, callback, (void *)&t_id);

    if(rc != 0) {
        printf("Thread creation failed with error code: %d\n", rc);
        return;
    }
}

int main() {

    pthread_t mappers[MAX_THREADS];
    void* results[MAX_THREADS];
    unsigned int iterations;

    printf("Enter number to count down from: ");
    scanf("%d", &iterations);

    if(iterations > MAX_THREADS) {
        printf("Number greater than %d not permitted.\n", MAX_THREADS);
        return 0;
    }

    /* Spawn each of the threads up to 16 */
    for(int i = 0; i < iterations; i++) {
        create_thread(&mappers[i], i);
    }

    /* Get results in reverse order */
    for(int j = iterations - 1; j > -1; j--) {
        pthread_join(mappers[j], &results[j]);

        if(results[j]) {
            printf("%d\n", *(int *)results[j]);
            free(results[j]);
            results[j] = NULL;
        }
    }

    return 0;
}