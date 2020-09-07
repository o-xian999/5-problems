#include <stdio.h>

typedef struct Point {
  double x;
  double y;
}Point;

int count_points(Point *p), i, ans = 0;

int main(void){
  Point p[1000];
  for(i = 0; i < 30; i++){
    scanf("%lf %lf", &p[i].x, &p[i].y);
  }
  count_points(p);
  return 0;
}

int count_points(Point *p){
  for(i = 0; i < 30; i++){
    if((p[i].x - 0.6) * (p[i].x - 0.6) + (p[i].y - 0.3) * (p[i].y - 0.3) <= 1)ans++;
  }
  printf("%f %f %d\n", 0.6, 0.3, ans);
}
  
