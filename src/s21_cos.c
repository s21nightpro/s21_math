#include "s21_math.h"

long double s21_cos(double x) {
  double res = 1, tmp = 1;
  for (int i = 1; !(-0.0000000001 <= tmp && tmp <= 0.000000001); i++) {
    tmp = (-tmp) * (x * x) / ((2 * i - 1) * (2 * i));
    res += tmp;
  }
  return res;
}
