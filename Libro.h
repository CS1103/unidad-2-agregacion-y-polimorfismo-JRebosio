//
// Created by Usuario on 19/09/2019.
//

#ifndef NUEVO_LIBRO_H
#define NUEVO_LIBRO_H

#include "Volumen.h"

class Libro: public Volumen{
    int nLibros;
public:
    Libro(int);
    ~Libro();
    void Mostrar() override;
};


#endif //NUEVO_LIBRO_H
