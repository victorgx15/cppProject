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
#include "Arete.hpp"
#include "Sommet.hpp"

using namespace std;

class Graph {
    vector<Sommet> listSommets;
    vector<Arete> listAretes;
public:
    int parcoursMin();
    Graph(Sommet s);
    void ajoutSommet(Sommet s);
    void ajoutArete(Arete a);
};

#endif /* Graph_hpp */
