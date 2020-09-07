#include <stdio.h>
#include <string.h>

int main(void){
  char s[20];
  int i, ans = 0;
  for(i = 0; i < 100; i++){
    scanf("%s", &s);
    if(strcmp(s, "linseed's") != 0)ans++;
    else{
      printf("%s %d", "linseed's", ans);
      //break;
    }
  }
  if(ans == 0)printf("linseed's none");
  return 0;
}
