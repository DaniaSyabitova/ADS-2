// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1;
  if (n == 0)
    return 1;
  else if (n == 1)
    return value;
  else {
    for (int i = 1; i <= n; i++) {
      res = res * value;
    }
    return res;
  }
}

uint64_t fact(uint16_t n) {
  if (n == 1)
    return n;
  else
    return n * fact(n - 1);
}

double calcItem(double x, uint16_t n) {
  double res = pown (x, n) / fact (n);
  return res;
}

double expn(double x, uint16_t count) {
  uint16_t slog;
  for (int i = 1; i <= count; i++) {
    slog = calcItem (x, i);
    count += slog;
  }
  return count;
}

double sinn(double x, uint16_t count) {

}

double cosn(double x, uint16_t count) {

}
