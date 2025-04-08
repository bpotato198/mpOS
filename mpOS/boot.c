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
        printf("STARTING TARTAC...\n");
        printf("STARTING KERNEL\n");
        printf("M-P-O-S Booted... all systems operational\n");
        printf("booted! initializing...\n");
        kernel();

    } else {
          printf("no command such %s\n", bootinput);

    }
    

}
