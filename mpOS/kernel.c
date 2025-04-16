#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "calls.h"


void kernel() {
      char shellinput[1000];
      printf("ASHLL $ ");
      scanf("%99s", shellinput);


      if (strcmp(shellinput, "clr") == 0) {
        system("clear");
        kernel();





      }


      if (strcmp(shellinput, "ashll") == 0) {
              printf("ASHLL the mpOS shell version 0.2  \n");
              kernel();

      }

      if (strcmp(shellinput, "infecth") == 0) {
          printf("__/-\_|-/ |_| S\n");
          kernel();
      }



      if (strcmp(shellinput, "exit") == 0) {
             printf("exiting ASHLL and mpOS\n");
             sleep(1);
             return;




      }
      if (strcmp(shellinput, "bench") == 0) {
          char benchinput[10000];
          int loopcount = atoi(benchinput);
          printf("input the amounts of loop to do..\n");
          scanf("%99s", benchinput);

          for (int i = 0; i < loopcount; i++) {
              printf("loops: %s", benchinput);
          }

      }



      if (strcmp(shellinput, "help") == 0) {
           printf("mpOS ver0.1 codename rocks\n");
           kernel();

      }

      if (strcmp(shellinput, "tartac") == 0) {
                 kernel();


      }
      if (strcmp(shellinput, "0/0") == 0) {
          printf("WARNING! THIS IS A TEST COMMAND!! THIS WILL CRASH MPOS!\n");
          printf("YOU HAVE 4 SECONDS TO CANCEL IT!\n");
          sleep(4);
          int sum = 0 / 0;

          printf("sum = %d\n", sum);
      }


      else {

        printf("no command such as %s\n", shellinput);
        kernel();

      }


}
