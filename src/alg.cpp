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
  double res = pown(x, n) / fact(n);
  return res;
}

double expn(double x, uint16_t count) {
  uint16_t slog = 0;
  for (uint16_t i = 1; i <= count; i++) {
    slog += calcItem(x, i);
  }
  return slog;
}

double sinn(double x, uint16_t count) {
  uint16_t slog = 0;
  for (uint16_t i = 1; i <= count; i++) {
    slog += pown(-1, i - 1) * calcItem(x, 2 * i - 1);
  }
  return slog;
}

double cosn(double x, uint16_t count) {
  uint16_t slog = 0;
  for (uint16_t i = 1; i <= count; i++) {
    slog += pown(-1, i - 1) * calcItem(x, 2 * i - 2);
  }
  return slog;
}
