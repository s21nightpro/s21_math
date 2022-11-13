#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res = s21_fabs(x), tmpy = s21_fabs(y), tmpx = res;
  for (int i = 1; res > tmpy; i++) res = tmpx - tmpy * i;
  return x < 0 ? -res : res;
}
