// main.c

#include <stdio.h>
#include <stdlib.h>
#include "command1.h"
#include "command2.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <command>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "command1") == 0) {
        return command1_main(argc - 1, argv + 1);
    } else if (strcmp(argv[1], "command2") == 0) {
        return command2_main(argc - 1, argv + 1);
    } else {
        printf("Unknown command: %s\n", argv[1]);
        return 1;
    }
}
