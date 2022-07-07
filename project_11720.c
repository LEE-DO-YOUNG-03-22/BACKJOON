#include <stdio.h>
#include <string.h>

int main(){
  int N, sum = 0;
  char num[100];

  scanf("%d",&N);
  getchar();
  for(int i = 0 ; i < N ; i++){
      scanf("%c", &num[i]);
  }
  for(int j = 0 ; j < N ; j++){
      sum = sum + ((int)num[j] - '0');
  }
  printf("%d\n", sum);

  return 0;
}
