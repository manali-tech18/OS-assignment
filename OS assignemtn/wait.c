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
        printf("Child process starting...\n");
        sleep(2);
        printf("Child process finishing execution.\n");
        return 0;
    } else {
        printf("Parent process waiting for child...\n");
        wait(NULL);
        printf("Parent process resumes: Child has finished.\n");
    }

    return 0;
}
