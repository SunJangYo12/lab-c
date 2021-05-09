// mengubah thread2 ke alamat heap

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <pthread.h>

void *thread_body_1(void *arg) {
    int local_var = 0;
    printf("Thread1 > Stack Address: %p\n", (void*)&local_var);
    return 0;
}
void *thread_body_2(void *arg) {
    int local_var = 0;
    printf("Thread2 > Stack Address: %p\n", (void*)&local_var);
    return 0;
}

int main(int argc, char **argv) {
    size_t buffer_len = PTHREAD_STACK_MIN + 100; // buffer dialokasikan dari heap untuk digunakan sbg wilayah thread
    char *buffer = (char*)malloc(buffer_len + sizeof(char));

    pthread_t thread1;
    pthread_t thread2;

    int result1 = pthread_create(&thread1, NULL, thread_body_1, NULL);
    pthread_attr_t attr;
    pthread_attr_init(&attr);

    if (pthread_attr_setstack(&attr, buffer, buffer_len)) { // set stack address and size
       printf("Failed setting stack attribut.\n");
       exit(1);
    }

    int result2 = pthread_create(&thread2, &attr, thread_body_2, NULL);

    if (result1 || result2) {
       printf("Thread can't create\n");
       exit(2);
    }

    printf("Main Thread > Heap Address: %p\n", (void*)buffer);
    printf("Main Thread > Stack Address: %p\n", (void*)buffer_len);

    /* wait thread to finish */
    result1 = pthread_join(thread1, NULL);
    result2 = pthread_join(thread2, NULL);

    if (result1 || result2) {
       printf("Thread can't joined\n");
       exit(3);
    }
    free(buffer);

    return 0;
}
