#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
const int NCHILD = 5;
const int NSTEP = 1;

int main(){


    for (int i = 0; i < NCHILD; i++){
        int pid = fork();

    if (pid == 0){
        for (int j = 0; j < NSTEP; j++){
            printf("child %d (pid %d): step %d\n", i, getpid(), j);
        }
        exit(0);
    }

    for (int i = 0; i < NCHILD; i++){
        wait(0);
    }

}

}