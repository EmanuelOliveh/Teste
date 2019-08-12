#include <stdio.h>

int main(void) {
  int n1 = 0, n2 = 0;
  char nome1 [20] = "", nome2 [20] = "";
  printf("Informe o primeiro nome: ");
  scanf(" %s", nome1);
  getchar();
  printf("Informe a idade de %s: ", nome1);
  scanf(" %d", &n1);
  printf("Informe o segundo nome: ");
  scanf(" %s", nome2);
  printf("Informe a idade de %s: ", nome2);
  scanf(" %d", &n2);
  if (n1 > n2){
    printf("%s é mais velho que %s. \n", nome1, nome2);
  }
  else if (n1 < n2){
    printf("%s é mais velho que %s.\n", nome2, nome1);
  }
  else{
    printf("Os dois são de mesma idade.\n");
  }
  return 0;

}
