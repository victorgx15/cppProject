//
//  Graph.hpp
//  Graph
//
//  Created by Victor Xu on 11/22/17.
//  Copyright © 2017 ds. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <iostream>
#include <vector>
#include <set>
#include "Arete.hpp"
#include "Sommet.hpp"

using namespace std;

class Graph {
    vector<Arete> listAretes;
public:
    Graph parcoursPrim(Sommet); //Parcours avec algo de Prim
    set<Sommet> getSommets();
    Arete arretePlusCourte(Sommet s);
    vector<Arete> listArrPar(Sommet s);
    Arete biggestArete();
    Arete getAreteOf(Sommet, Sommet);
    Graph(Arete a);
    void ajoutArete(Arete a);
    void afficher();
};

#endif /* Graph_hpp */
