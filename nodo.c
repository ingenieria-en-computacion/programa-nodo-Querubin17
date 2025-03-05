#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

Nodo* crearNodo() {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->sig = NULL;
    nuevo->dato = 0;
    return nuevo;
}

bool borrarNodo(Nodo* n) {
    if (n->sig == NULL) {
        free (n);
        return true;
    }
    return false;
}

Nodo* asignarDato(Nodo* n, DATO d) {
    if (n != NULL) {
        n->dato = d;
    }
    return n;
}

DATO obtenerDato(Nodo* n) {
    if (n == NULL) {
        printf("No hay datos\n");
        return -1; 
    }
    return n->dato;
}

Nodo* asignar_referencia(Nodo* n, Nodo* e) {
    if (n != NULL) {
        n->sig = e;
    }
    return n;
}

Nodo* obtener_referencia(Nodo* n) {
    if (n != NULL) {
        return n->sig;
    }
    return NULL;
}
