//
// Created by Usuario on 19/09/2019.
//
#include <iostream>
#include "biblioteca.h"

using namespace std;

biblioteca::biblioteca() {
    V=NULL;
}

biblioteca::~biblioteca() {

}

void biblioteca::Mostrar() {
    for(auto u: V){
        u.mostrar();
    }
}

biblioteca biblioteca::incluir(const Volumen & u) {
    V->push_back(u);
    return *this;
}
