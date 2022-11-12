#include "s21_math.h"

long double s21_sqrt(double x) {
  long double tmp = 0, res = x < 0 ? -S21_NAN : x / 2;
  while (res != tmp) {
    tmp = res;
    res = (x / tmp + tmp) / 2;
  }

  return res;
}
