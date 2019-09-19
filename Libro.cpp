//
// Created by Usuario on 19/09/2019.
//
#include <iostream>
#include "Libro.h"

Libro::Libro(int n) {
    nLibros = n;
}

Libro::~Libro() {
    nLibros=0;
}

void Libro::Mostrar() {
    printf("%d", nLibros);
}
