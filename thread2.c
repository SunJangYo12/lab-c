// compile: gcc thread.c -lpthread
// Note: jalankan sebanyak mungkin untuk melihat thread tidak berurutan (problem)
// in use release you can open ebook "Extreme C" chapter16 Thread syncron...

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h> // posix standard header

void *thread_body(void *arg) {
    char *str = (char*)arg;
    printf("%s\n", str);
    return NULL;
}

int main(int argc, char **argv) {
    pthread_t thread1;
    pthread_t thread2;
    pthread_t thread3;

    int result1 = pthread_create(&thread1, NULL, thread_body, "Apple");
    int result2 = pthread_create(&thread2, NULL, thread_body, "Orange");
    int result3 = pthread_create(&thread3, NULL, thread_body, "Lemon");

    if (result1 || result2 || result3) {
       printf("Thread can't create\n");
       exit(1);
    }

    result1 = pthread_join(thread1, NULL); // wait for thread to finish
    result2 = pthread_join(thread2, NULL);
    result3 = pthread_join(thread3, NULL);

    if (result1 || result2 || result3) {
       printf("Thread can't joined");
       exit(2);
    }
    return 0;
}
