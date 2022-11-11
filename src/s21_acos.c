#include "s21_math.h"

long double s21_acos(double x) {
  return (1 >= x && x >= -1) ? (s21_PI / 2.0 - s21_asin(x)) : s21_NAN;
}