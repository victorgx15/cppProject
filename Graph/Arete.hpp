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
    
    // Construire une arête à l'aide de 2 sommets et une distance
    Arete(Sommet xx, Sommet yy, int dist);
    
    //Renvoyer l'extrémité d'un sommet par rapport à un autre (en argument) dans l'arête
    Sommet getExtremite(Sommet);
    
    // Afficher les 2 sommets de l'arête et son poids
    void afficher();
    
    // Renvoyer les sommets de l'arête
    Sommet getX();
    Sommet getY();
    
    // Renvoyer la distance de l'arête
    int getDistance();
    
    // Est-ce que le sommet en argument est contenu dans l'arête ?
    bool unSommet(Sommet s);
    bool operator==(const Arete& a) const;
};

#endif /* Arete_hpp */
