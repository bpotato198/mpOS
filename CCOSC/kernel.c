#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "calls.h"


void kernel() {
      char shellinput[1000];
      printf("ASH $    ");
      scanf("%99s", shellinput);

      if (strcmp(shellinput, "ashll") == 0) {
              printf("ASHLL the mpOS shell version 0.2\n");
              kernel();

      } 

      if (strcmp(shellinput, "exit") == 0) {
             printf("exiting ASHLL and mpOS\n");
             sleep(1);
             
             

      }
      if (strcmp(shellinput, "help") == 0) {
           printf("mpOS ver0.1 codename rocks\n");
           kernel();

      }
      if (strcmp(shellinput, "tartac") == 0) {
                 tartac();
                 kernel();
          

      }
      else {
          
        printf("no command such as %s\n", shellinput);

      }


}
