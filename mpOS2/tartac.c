#include <stdio.h>
#include <string.h>
#include "calls.h"
#include <unistd.h>
void tartac() {
      char optioninput[200];
      char pkgname[2000];
      printf("Welcome to tartac, select a option\n");
      scanf("%99s", optioninput);
       if (strcmp(optioninput, "install") == 0) {
             printf("input a package name..\n");
             scanf("%99s", pkgname);
             sleep(2);
             printf("installing package %s\n...", pkgname);
             sleep(5);
             printf("unpacking from source...\n");
             sleep(1);
             printf("done!\n");
             printf("installed %s\n", pkgname);
             kernel();
             

  }
 }
