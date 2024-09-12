#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc == 3) {
    float input = atof(argv[2]);
    if (strcmp(argv[1], "fc") == 0) {
      float f2c = (input - 32) * 5 / 9;
      printf("%.1f°F is %.1f°C\n", atof(argv[2]), f2c);
    } else if (strcmp(argv[1], "cf") == 0) {
      float c2f = (input * 9 / 5) + 32;
      printf("%.1f°C is %.1f°F\n", atof(argv[2]), c2f);
    }
  }

  if (argc > 3) {
    printf("Too many arguments!\n");
  } else if (argc < 3) {
    printf("Not enough arguments!\n");
  }
  return 0;
}
