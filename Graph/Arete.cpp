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
    cout<< "(" << x.getName() << ", " << y.getName() << ", poid=" << distance << ")" << endl;
}

Sommet Arete::getX() {
    return x;
}

Sommet Arete::getY() {
    return y;
}

bool Arete::operator==(const Arete& a) {
    return  (this->x == a.x && this->y == a.y) ||
            (this->y == a.x && this->x == a.y);
}
