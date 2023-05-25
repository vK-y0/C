#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main( int argc, char*argv[]) {
  char lettre = 'B';
  printf("%c\n", lettre);

  char chaine[6];
  chaine[0] = 'S';
  chaine[1] = 'a';
  chaine[2] = 'l';
  chaine[3] = 'u';
  chaine[4] = 't';
  chaine[5] = '\0';
  printf("%s\n", chaine);

  char chaine2[] = "Salut ca va ?";
  printf("%s\n", chaine2);

  return 0;
}
