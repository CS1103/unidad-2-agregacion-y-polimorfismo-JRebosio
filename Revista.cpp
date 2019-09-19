//
// Created by Usuario on 19/09/2019.
//
#include <iostream>
#include "Revista.h"

Revista::Revista(int n) {
    nRevista=n;

}

void Revista::Mostrar() {
    printf("%d", nRevista);
}

Revista::~Revista() {
    nRevista=0;
}
