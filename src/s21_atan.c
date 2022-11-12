#include "s21_math.h"

long double s21_atan(double x) {
  long double res = 0;
  if (1 > x && x > -1) {
    res = s21_asin((x) / (s21_sqrt(1 + x * x)));
  }
  return res;
}