#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(){
    printf("free pages: %d\n", freepages());
    exit(0);
}