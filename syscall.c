#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h> // this not POSIX standard

int main() {
    char message[20] = "Hello word\n";

    syscall(__NR_write, 1, message, 13);

    return 0;
}
