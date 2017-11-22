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
    void afficher();
    Sommet getX();
    Sommet getY();
    bool operator==(const Arete& a);
};

#endif /* Arete_hpp */
