// kernel/sysinfo.h
#include "types.h"
struct sysinfo {
    uint64 freepages;
    uint64 nproc;
};