//
//  Arete.hpp
//  Graph
//
//  Created by Victor Xu on 11/22/17.
//  Copyright © 2017 ds. All rights reserved.
//

#ifndef Arete_hpp
#define Arete_hpp

#include <iostream>
#include "Sommet.hpp"

class Arete {
    Sommet x, y;
    int distance;
public:
    Arete(Sommet xx, Sommet yy, int dist);
    Sommet getExtremite(Sommet);
    void afficher();
    Sommet getX();
    int getDistance();
    Sommet getY();
    bool unSommet(Sommet s);
    bool operator==(const Arete& a) const;
};

#endif /* Arete_hpp */
