//
//  Graph.cpp
//  Graph
//
//  Created by Victor Xu on 11/22/17.
//  Copyright © 2017 ds. All rights reserved.
//

#include "Graph.hpp"

Graph::Graph(Sommet s) {
    listSommets.push_back(s);
}

void Graph::ajoutSommet(Sommet s) {
    if(std::find(listSommets.begin(), listSommets.end(), s) != listSommets.end()) {
        std::cout<<"Le sommet existe deja dans le graphe"<<std::endl;
        return;
    }
    listSommets.push_back(s);
}

void Graph::ajoutArete(Arete a) {
    // Si les sommets existent dans la liste et que l'arete n'est pas dans la liste
    if(std::find(listSommets.begin(), listSommets.end(), a.getX()) != listSommets.end() &&
       std::find(listSommets.begin(), listSommets.end(), a.getY()) != listSommets.end() &&
       std::find(listAretes.begin(), listAretes.end(), a) == listAretes.end()) {
        listAretes.push_back(a);
    } else {
        std::cout<<"Erreur sur l\'arete a ajouter"<<std::endl;
    }
}

