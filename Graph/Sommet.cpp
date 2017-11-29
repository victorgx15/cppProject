//
//  Sommet.cpp
//  Graph
//
//  Created by Victor Xu on 11/22/17.
//  Copyright © 2017 ds. All rights reserved.
//

#include "Sommet.hpp"
#include <string>

Sommet::Sommet(int n) {
    numero = n;
}

Sommet::Sommet() {
    numero = 0;
}

int Sommet::getName() {
    return numero;
}

bool Sommet::operator==(const Sommet& s) const {
    return s.numero == this->numero;
}

void Sommet::operator=(const Sommet& s) {
    numero = s.numero;
}
