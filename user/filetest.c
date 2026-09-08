#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/syscall.h"
#include "kernel/fcntl.h"

int main(){
    char buf[64];
    struct stat st;

    int fd = open("mydata.txt", O_CREATE|O_WRONLY);
    printf("write fd = %d\n", fd);

    int n = write(fd, "hello xv6\n", 10);
    printf("wrote bytes: %d", n);
    close(fd);

    fd = open("mydata.txt", O_RDONLY);
    printf("read fd = %d\n", fd);

    n = read(fd, buf, sizeof(buf)-1);
    fstat(fd, &st);

    close(fd);
    exit(0);
}