//
// Created by Usuario on 19/09/2019.
//

#include "Volumen.h"
#include <iostream>

Volumen::Volumen(string s, int n) {
    nVol=n;
    nombre=s;

}

Volumen::~Volumen() {
    nVol=0;
    nombre=NULL;

}



