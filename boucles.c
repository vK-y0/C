#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int condition = 100;
  int line = 1;
  while ( condition > 0 ) {
    printf("Hello this is line %d\n", line);
    line++;
    condition--;
  }

  int compteur = 10;
  do {
    printf("Bonjour ceci est une boucle do/while\n");
    printf("elle s'execute au moins une fois\n");
  } while ( compteur == 0 );

  for ( int i = 0 ; i <= 10 ; i++ ) {
    printf("Bonjour ceci est une boucle for, et c'est l'execution numéro %d\n", i);
  }

  return 0;
}
