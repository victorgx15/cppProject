//
//  Sommet.cpp
//  Graph
//
//  Created by Victor Xu on 11/22/17.
//  Copyright © 2017 ds. All rights reserved.
//

#include "Sommet.hpp"
#include <string>

string Sommet::getName() {
    return name;
}

bool Sommet::operator==(const Sommet& s) {
    return s.name == this->name;
}
