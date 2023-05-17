#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  const int DAMAGES = 2;
  int hP = 10;
  printf("Vous possédez %d points de vie\n", hP);
  printf(" BAM UN ORC VOUS ATTAQUE ET VOUS ENLEVE %d points de vie\n", DAMAGES);
  hP -= DAMAGES;
  printf(" Il ne vous reste plus que %d points de vie\n", hP);
  int age ;
    printf("Bonjour\nPouvez vous nous indiquer votre âge SVP ?\n");
    scanf("%d", &age);
    printf("Je suis heureux d'apprendre que vous avez %d ans! \n\n", age);
  return 0;
}
