#include "math.h"

long double s21_sin(double x) {
  double res = x, tmp = x;
  for (int i = 1; !(-0.0000000001 <= tmp && tmp <= 0.000000001); i++) {
    tmp = (-tmp) * (x * x) / ((2 * i + 1) * (2 * i));
    res = res + tmp;
  }
  return res;
}
