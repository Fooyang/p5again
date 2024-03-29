typedef unsigned int uint;
#include "spinlock.h"
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef uint pde_t;
typedef struct
{
    uint locked;        // Is the lock held?
    struct spinlock lk; // spinlock protecting this sleep lock

    // For debugging:
    char *name; // Name of lock.
    int pid;    // Process holding lock
} mutex;


