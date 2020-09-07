#include <stdio.h>

int main(void){
  int a = 0, ans = 0, i;
  
  for(i = 0; i < 100; i++){
    scanf("%d", &a);
    if(a >= 1000 && a <= -1000)ans += a;


    printf("%d\n", ans);

  }
  return 0;
}
