//
// Created by Usuario on 19/09/2019.
//

#ifndef NUEVO_VOLUMEN_H
#define NUEVO_VOLUMEN_H

#include "Volumen.h"

class Volumen {
    int nVol;
    string nombre;
public:
    Volumen(string, int);
    ~Volumen();
    virtual void Mostrar() ;



};






#endif //NUEVO_VOLUMEN_H
