//
//  Sommet.cpp
//  Graph
//
//  Created by Victor Xu on 11/22/17.
//  Copyright © 2017 ds. All rights reserved.
//

#include "Sommet.hpp"
#include <string>

Sommet::Sommet(string n) {
    name = n;
}

Sommet::Sommet() {
    name = "";
}

string Sommet::getName() {
    return name;
}

bool Sommet::operator==(const Sommet& s) {
    return s.name == this->name;
}

void Sommet::operator=(const Sommet& s) {
    name = s.name;
}
