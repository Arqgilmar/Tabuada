#include <stdio.h>

int main(void) {
  
  int num;
  int res;
  int i = 0;
  
  printf("Digite um número para ver sua tabuada:\n");
  scanf("%d", &num);

  printf("===================================\n");
  printf("           TABUADA DO %d           \n", num);
  printf("===================================\n");
  
  while(i <= 10){
    res = num * i;
    printf("%d X %d = %d\n", num, i, res);

    i++;
  }
  
  return 0;
}
