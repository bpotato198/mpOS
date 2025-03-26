#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include "calls.h"

void tartac() {
      char optioninput[200];
      char pkgname[2000];
      printf("Welcome to tartac, select a option\n");
      scanf("%99s", optioninput);
       if (strcmp(optioninput, "install") == 0) {
             printf("input a package name..\n");
             scanf("%99s", pkgname);
             Sleep(900);
             printf("installing package %s\n...", pkgname);
             printf("unpacking from source...\n");
             Sleep(1000);
             printf("done!\n");
             printf("installed %s", pkgname);
             


}
}