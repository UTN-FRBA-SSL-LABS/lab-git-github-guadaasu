#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

//La funcion sumar recibe dos parametros enteros y retorna la suma entre ellos
int sumar(const int a, const int b) { //Se agrega const a las variables que no se modifican


int sumar(int a, int b) {

    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

//esta funcion multiplica dos enteros
int multiplicar(int a, int b) {
    return a * b;
}

int multiplicar(int a, int b) {
    (void)a; (void)b;
    return 0; /* TODO: implementar */

}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}

int dividir(int a, int b) {
    return a - b; // bug intencional //
}

    return (n & 1) == 0;
}