#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();
    if (pid < 0) {
        return 1;
    } else if (pid == 0) {
        printf("Child process created\n");
    } else {
        printf("Parent process execution\n");
    }
    return 0;
}
