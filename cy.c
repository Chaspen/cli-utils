#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  if (argc == 1) {
    printf("No arguments passed, please input a year.\n");
  }
  if (argc == 2) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int time_ago = 1900 + tm.tm_year - atoi(argv[1]);
    printf("%d was %d years ago.\n", atoi(argv[1]), time_ago);
  }
  if (argc > 2) {
    printf("Too many arguments! please input a year.\n");
  }
  return 0;
}
