#include <stdio.h>
#include <string.h>
#include "calls.h"
#include <Windows.h>
void bootk() {
    char bootinput[100];

    printf("==CCOS== select a option to boot: ccos\n");
    scanf("%99s", bootinput);

    if (strcmp(bootinput, "ccos") == 0) {
        Sleep(2000);
        printf("booting to %s... please wait..\n", bootinput);
        printf("booted! initializing...\n");
        kernel();

    } else {
          printf("no command such %s\n", bootinput);

    }
    

}
