/*

$ kill -SIGUSR2 4598
SIGUSR2 received!
$ kill -SIGUSR1 4598
SIGUSR2 received!
$ kill -SIGINT 4598
Interrupt signal is received!
$ kill -SIGKILL 4598
$
[1]+ Stopped ./ex19_1.out
$

*/
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void handle_user_signals(int signal) {
  switch (signal) {
     case SIGUSR1:
        printf("SIGUSR1 received!\n");
        break;
     case SIGUSR2:
        printf("SIGUSR2 received!\n");
        break;
     default:
        printf("Unsupported signal is received!\n");
   }
}

void handle_sigint(int signal) {
    printf("Interrupt signal is received!\n");
}
void handle_sigkill(int signal) {
    printf("Kill signal is received! Bye.\n");
    exit(0);
}

int main(int argc, char** argv) {
    signal(SIGUSR1, handle_user_signals);
    signal(SIGUSR2, handle_user_signals);
    signal(SIGINT, handle_sigint);
    signal(SIGKILL, handle_sigkill);
    while (1);
    return 0;
}
