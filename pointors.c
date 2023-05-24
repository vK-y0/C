#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void test();
void triplerChiffre( int *pointeur);


int main(int argc, char *argv[]) {
  int number = 10;
  int *pointor = &number;
  printf("MAIN : Ceci est le contenu de number : %d\n", number);
  printf("MAIN : Ceci est l'adresse memoire de number en hexadécimal : %p\n", &number);
  printf("MAIN : Ceci est l'adresse memoire mais en decimal et contenue dans le pointeur: %d\n", pointor);
  printf("MAIN : Ceci est le contenu de number obtenu via le pointeur : %d\n", *pointor);
  triplerChiffre(&number);
  printf("MAIN :Le contenu de la variable a ete modifie par ma fonction mais via son pointeur : %d\n", number);
  test();
  return 0;
}

/* Sur une variable, comme la variable age  :

age signifie : "Je veux la valeur de la variable age  " ;

&age signifie : "Je veux l'adresse à laquelle se trouve la variable age  ".

Sur un pointeur, comme pointeurSurAge  :

pointeurSurAge signifie : "Je veux la valeur de pointeurSurAge  " (cette valeur étant une adresse) ;

*pointeurSurAge signifie : "Je veux la valeur de la variable qui se trouve à l'adresse contenue dans pointeurSurAge  ".
*/

void test() {
  int variable = 100;
  printf("  FONCTION TEST : Le contenu de la variable est : %d\n", variable);
  int* pointeur = &variable;
  printf(" FONCTION TEST :le contenu du pointeur est %p\n", pointeur);
  printf(" FONCTION TEST : le contenu de la variable contenue dans le pointeur est %d\n", *pointeur);
  *pointeur = 100000;
  printf("FONCTION TEST : apres modification via le pointeur la variable est maintenant %d\n", *pointeur);
}

void triplerChiffre( int *pointeur) {
  *pointeur *= 3;
}
