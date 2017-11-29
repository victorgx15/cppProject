//
//  Arete.cpp
//  Graph
//
//  Created by Victor Xu on 11/22/17.
//  Copyright © 2017 ds. All rights reserved.
//

#include "Arete.hpp"

Arete::Arete(Sommet xx, Sommet yy, int dist) {
    x = xx;
    y = yy;
    distance = dist;
}

void Arete::afficher() {
    cout << x.getName() << "->" << y.getName() << ", poid=" << distance << endl;
}

Sommet Arete::getX() {
    return x;
}

bool Arete::unSommet(Sommet s) {
    return s == getY() || s == getX();
}

Sommet Arete::getY() {
    return y;
}

Sommet Arete::getExtremite(Sommet xl) {
    if (xl == x)
        return y;
    return x;
}

int Arete::getDistance() {
    return distance;
}

bool Arete::operator==(const Arete& a) const {
    return  (this->x == a.x && this->y == a.y) ||
    (this->y == a.x && this->x == a.y);
}
