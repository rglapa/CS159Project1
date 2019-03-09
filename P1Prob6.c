#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"

int main() {
    int pid;
    int i;
    printf("Immediately before the fork\n");
    for(i = 0;i<1;i++) {
        if((pid=fork())<0) {
            printf("Sorry...cannot fork\n");
        } else if(pid == 0) {
            printf("Immediately after the fork\n");
            printf("I'm the child. My pid is %d. My parent's pid is %d.\n", getpid(),getppid());

        } else {
            wait(NULL);
            printf("I'm the parent. My pid is %d. My child's pid is %d.\n", getppid(),getpid());
        }
    }
    exit(0);
}
