#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdio.h>

#define s21_PI 3.14159265358979324
#define s21_NPI -3.14159265358979324
#define s21_EPS 1e-17
#define s21_ln10 2.30258509299404590109
#define s21_INF 1.0 / 0.0
#define s21_NINF -1.0 / 0.0
#define s21_NAN 0.0 / 0.0
#define s21_N_NAN -0.0 / 0.0
#define s21_MAX_double 1.7976931348623157e308

+ int s21_abs(int);
+ long double s21_acos(double);
  long double s21_asin(double);
  long double s21_atan(double);
  long double s21_ceil(double);
  long double s21_cos(double);
  long double s21_exp(double);
+ long double s21_fabs(double);
  long double s21_floor(double);
  long double s21_fmod(double, double);
  long double s21_pow(double, double);
  long double s21_sin(double);
  long double s21_sqrt(double);
  long double s21_tan(double);

#endif  // SRC_S21_MATH_H_