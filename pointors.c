#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int number = 10;
  int *pointor = &number;
  printf(" Ceci est le contenu de number : %d\n", number);
  printf(" Ceci est l'adresse memoire de number en hexadécimal : %p\n", &number);
  printf(" Ceci est l'adresse memoire mais en decimal et contenue dans le pointeur: %d\n", pointor);
  printf(" Ceci est le contenu de number obtenu via le pointeur : %d\n", *pointor);
  return 0;
}
