#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int n = 3; 
    for (int i = 0; i < n; i++) {
        pid_t pid = fork();
        if (pid < 0) {
            fprintf(stderr, "Fork failed\n");
            return 1;
        } else if (pid == 0) {
            printf("Child %d created (PID: %d, Parent PID: %d)\n", i + 1, getpid(), getppid());
            return 0; 
        }
    }
    for (int i = 0; i < n; i++) {
        wait(NULL);
    }
    printf("Parent process (PID: %d) finished waiting for all children\n", getpid());
    return 0;
}
