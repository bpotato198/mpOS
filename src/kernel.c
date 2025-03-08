#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include "calls.h"

void kernel() {
      char shellinput[1000];
      printf("<ASH>>    ");
      scanf("%99s", shellinput);

      if (strcmp(shellinput, "ash") == 0) {
              printf("ASH the CCOS shell version 0.2\n");
              kernel();

      } else {
          
        printf("no command such %s\n", shellinput);

      }
      if (strcmp(shellinput, "exit") == 0) {
             printf("exiting ASH and CCOS\n");
             Sleep(1000);
             return 0;
             

      }
      if (strcmp(shellinput, "help") == 0) {
           printf("CLICCOS ver0.2 codename rocks\n");
           kernel();

      }

}
