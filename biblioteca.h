//
// Created by Usuario on 19/09/2019.
//
#include <vector>
#ifndef NUEVO_BIBLIOTECA_H
#define NUEVO_BIBLIOTECA_H

#include "Volumen.h"

class biblioteca {

    vector <Volumen> * V;
public:
    biblioteca();
    ~biblioteca();
    void Mostrar();
    biblioteca incluir(const Volumen & );


};


#endif //NUEVO_BIBLIOTECA_H
