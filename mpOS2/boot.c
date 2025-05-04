#include <stdio.h>
#include <string.h>
#include "calls.h"
#include <unistd.h>

void bootk() {
    char bootinput[100];

    printf("==mpOS2== select a option to boot: mpos\n");
    scanf("%99s", bootinput);

    if (strcmp(bootinput, "mpos2") == 0) {
        sleep(2);
        printf("booting to %s... please wait..\n", bootinput);
        printf("STARTING TARTAC...\n");
        printf("STARTING KERNEL\n");
        printf("M-P-O-S2 Booted... all systems operational\n");
        printf("booted! initializing...\n");
        kernel();

    } else {
          printf("no command such %s\n", bootinput);

    }
    

}
