#include <stdio.h>

int main(void){
  double a[100], sum = 0, count = 0, ave = 0, v = 0;
  int i;
  for(i = 0; i < 30; i++){
    scanf("%lf", &a[i]);
    if(a[i] >= -10 && a[i] <= 10){
      sum += a[i]; //条件満たす少数だけどんどん足す
      count++; //条件満たすaだけ数える
    }
  }

  ave = sum / count; //平均算出

  sum = 0;//sum使いまわすから0に初期化

  for(i = 0; i < 30; i++){
    if(a[i] >= -10 && a[i] <= 10){
      sum += (a[i] - ave) * (a[i] - ave);//分散の式の分子のとこ
    }
  }
  v = sum / count;//分散算出

  printf("%f\n", v);
  return 0;
}
