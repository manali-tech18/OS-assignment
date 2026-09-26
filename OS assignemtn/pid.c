#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        printf("Child Process:\n");
        printf("  Current PID: %d\n", getpid());
        printf("  Parent PID:  %d\n\n", getppid());
    } else {
        wait(NULL);
        printf("Parent Process:\n");
        printf("  Current PID: %d\n", getpid());
        printf("  Child PID:   %d\n", pid);
    }

    return 0;
}
