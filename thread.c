// compile: gcc thread.c -lpthread

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h> // posix standard header

void *thread_body(void *arg) {
    printf("Hello form first thread\n");
    return NULL;
}

int main(int argc, char **argv) {
    pthread_t thread;

    int result = pthread_create(&thread, NULL, thread_body, NULL);
    if (result) {
       printf("Thread can't create, Error number: %d\n", result);
       exit(1);
    }

    result = pthread_join(thread, NULL); // wait for thread to finish
    if (result) {
       printf("Thread can't joined, Error number: %d\n", result);
       exit(2);
    }
    return 0;
}
