#include <moca.h>

#include <stdio.h>
#include <stdlib.h>

#include <mocagendef.h>
#include <mocaerr.h>
#include <mislib.h>
#include <oslib.h>
#include <mxmllib.h>


void main(int argc, char *argv[])
{
    int ii;
    char buffer[10];

    void *foo;

    foo = malloc(100);
    free((void *) ((int) foo + 1));
    for (ii=0; ii<10; ii++)
    {
        printf("Press any key to allocate\n"); fflush(stdout);
        fgets(buffer, 10, stdin);
        malloc(10*1024*1024);
    }

    printf("Press any key to exit\n"); fflush(stdout);
    fgets(buffer, 10, stdin);

    exit(0);
}
