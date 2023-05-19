#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int burger() {
  int choixMenu;
  printf("=== Menu ===\n");
  printf("1. Royal Cheese\n");
  printf("2. Mc Deluxe\n");
  printf("3. Mc Bacon\n");
  printf("4. Big Mac\n");
  printf(" Votre choix ?\n");
  scanf("%d", &choixMenu);

    switch (choixMenu)
  {
  case 1:
    printf("Tu as choisis un Royal Cheese !");
    break;
  case 2:
    printf("Tu as choisis un Mc Deluxe !\n");
    break;
  case 3:
    printf("Tu as choisis un Mc Bacon !\n");
    break;
  case 4:
    printf("Tu as choisis un Big Mac !\n");
    break;
  default:
    printf("Le choix ne semble pas etre bon\n");
    break;
  }
}

int main(int argc, char *argv[]) {
  burger();
  int age;
  printf("Bo  njour\nVeuillez indiquer votre age\n");
  scanf("%d", &age);
  int majeur = age >= 18;
  return majeur ? printf("Vous etes majeur!\n\n") : printf("Vous etes mineur petit chenapan!\n\n");
}
