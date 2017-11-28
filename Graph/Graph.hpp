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
    set<Sommet> listSommets;
    set<Arete> listAretes;
public:
    //Renvoi un graphe qui est un arbre couvrant minimal avec l'algo de Prim
    Graph parcoursPrim(Sommet);
    
    //Donne l'arête la plus courte passant par le sommet passé en argument
    Arete arretePlusCourte(Sommet s);
    
    //La plus grande arête
    Arete biggestArete();
    
    Graph(Sommet s);
    void ajoutSommet(Sommet s);
    void ajoutArete(Arete a);
    void afficher();
};

#endif /* Graph_hpp */
