#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"

int main() {
    printf("Line 1 ..\n");
    write(1,"Line 2 ", 7);
    printf("\n");
}
