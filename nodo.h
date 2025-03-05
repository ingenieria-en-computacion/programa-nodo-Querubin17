#ifndef NODO_H
#define NODO_H

#include <stdbool.h>

typedef int DATO;

typedef struct Nodo {
    DATO dato;
    struct Nodo* sig;
} Nodo;


Nodo* crearNodo();  
bool borrarNodo(Nodo* n);
Nodo* asignarDato(Nodo* n, DATO d);
DATO obtenerDato(Nodo* n);
Nodo* asignar_referencia(Nodo* n, Nodo* e);
Nodo* obtener_referencia(Nodo* n);

#endif // NODO_H