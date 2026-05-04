#include "operaciones.h"

/* ── sumar ───────────────────────────────────────────────────────────────── */

int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar ──────────────────────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar ─────────────────────────────────────────────────────────── */

int multiplicar(int a, int b) {
    return a * b;
}

int esPar(int a) {
    return a % 2 == 0;
}