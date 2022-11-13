#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#define s21_PI 3.14159265358979324
#define s21_NPI -3.14159265358979324
#define s21_EPS 1e-17
#define s21_ln10 2.30258509299404590109
#define s21_INF 1.0 / 0.0
#define s21_NINF -1.0 / 0.0
#define s21_NAN 0.0 / 0.0
#define s21_N_NAN -0.0 / 0.0
#define s21_MAX_double 1.7976931348623157e308

#define S21_M_E 2.7182818284590452354          // Value of e
#define S21_M_LOG2E 1.4426950408889634074      // Value of log_2 e
#define S21_M_LOG10E 0.43429448190325182765    // Value of log_10 e
#define S21_M_LN2 0.69314718055994530942       // Value of log_e 2
#define S21_M_LN10 2.30258509299404568402      // Value of log_e 10
#define S21_M_PI 3.14159265358979323846        // Value of pi
#define S21_M_PI_2 1.57079632679489661923      // Value of pi/2
#define S21_M_PI_4 0.78539816339744830962      // Value of pi/4
#define S21_M_1_PI 0.31830988618379067154      // Value of 1/pi
#define S21_M_2_PI 0.63661977236758134308      // Value of 2/pi
#define S21_M_2_SQRTPI 1.12837916709551257390  // Value of 2/sqrt(pi)
#define S21_M_SQRT2 1.41421356237309504880     // Value of sqrt(2)
#define S21_M_SQRT1_2 0.70710678118654752440   // Value of 1/sqrt(2)
#define S21_MAX_DOUBLE 1.79769313486231571e+308
#define S21_EPS 1e-17
#define S21_INF 1.0 / 0.0
#define S21_NAN 0.0 / 0.0

int s21_abs(int);
long double s21_acos(double);
long double s21_asin(double);
long double s21_atan(double);
long double s21_ceil(double);
long double s21_cos(double);
long double s21_exp(double);
long double s21_fabs(double);
long double s21_floor(double);
long double s21_fmod(double, double);
long double log(double x);  // вычисляет натуральный логарифм
long double s21_pow(double, double);  // возводит число в заданную степень
long double s21_sin(double);  // вычисляет синус
long double s21_sqrt(double);
long double s21_tan(double);  // вычисляет тангенс

#endif  // SRC_S21_MATH_H_