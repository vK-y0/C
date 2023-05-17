#include <stdio.h>
#include <stdlib.h>

int main()
{
  const int DAMAGES = 2;
  int hP = 10;
  printf("Vous possédez %d points de vie\n", hP);
  printf(" BAM UN ORC VOUS ATTAQUE ET VOUS ENLEVE %d points de vie\n", DAMAGES);
  hP -= DAMAGES;
  printf(" Il ne vous reste plus que %d points de vie\n", hP);
  return 0;
}
