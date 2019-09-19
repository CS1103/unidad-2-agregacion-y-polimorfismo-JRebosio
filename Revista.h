//
// Created by Usuario on 19/09/2019.
//

#ifndef NUEVO_REVISTA_H
#define NUEVO_REVISTA_H

#include "Volumen.h"


class Revista: public Volumen{
    int nRevista;
public:
    Revista(int);
    ~Revista();
    void Mostrar() override;

};

#endif //NUEVO_REVISTA_H
