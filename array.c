#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Creer le tableau et l'initialiser avec des valeurs
  int array[4];
  array[0] = 12;
  array[1] = 34;
  array[2] = 56;
  array[3] = 78;

  for ( int i = 0 ; i < 4 ; i++) {
    printf("Element numero : %d = %d\n", i , array[i]);
  }

  // Creer le tableau, l'initialiser avec toutes les valeurs à 0 puis afficher toute ses valeurs pour bien verifier que tout est ok.
  int arrayTwo[5] = {0}, j;
  for ( j = 0 ; j < 5 ; j++) {
    printf("%d\n", arrayTwo[j]);
  }

// Test avec creation et initialisation d'un array de floats
 float arrayThree[5] = {0.0};
  for ( int k = 0 ; k < 5 ; k++) {
    printf("%f\n", arrayThree[k]);
  }

  return 0;
}
