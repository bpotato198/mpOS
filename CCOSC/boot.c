#include <stdio.h>
#include <string.h>
#include "calls.h"
#include <unistd.h>
void bootk() {
    char bootinput[100];

    printf("==mpOS== select a option to boot: mpos\n");
    scanf("%99s", bootinput);

    if (strcmp(bootinput, "mpos") == 0) {
        sleep(2);
        printf("booting to %s... please wait..\n", bootinput);
        printf("booted! initializing...\n");
        kernel();

    } else {
          printf("no command such %s\n", bootinput);

    }
    

}
