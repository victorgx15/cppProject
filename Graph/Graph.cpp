//
//  Graph.cpp
//  Graph
//
//  Created by Victor Xu on 11/22/17.
//  Copyright © 2017 ds. All rights reserved.
//

#include "Graph.hpp"

Graph::Graph(Sommet s) {
    listSommets.insert(s);
}

void Graph::ajoutSommet(Sommet s) {
    listSommets.insert(s);
}

void Graph::ajoutArete(Arete a) {
    // Si les sommets existent dans la liste
    if(listSommets.find(a.getX()) != listSommets.end() &&
       listSommets.find(a.getY()) != listSommets.end()) {
        listAretes.insert(a);
    } else {
        std::cout<<"Erreur sur l\'arete a ajouter"<<std::endl;
    }
}

void Graph::afficher() {
    for(auto a: listAretes) {
        a.afficher();
    }
}

Arete Graph::arretePlusCourte(Sommet s) {
    Arete minA = *(listAretes.begin());
    vector<Arete> listArr;
    for (Arete a: listAretes) {
        if ((s == a.getX() || s == a.getY()) &&
            (a.getDistance() < minA.getDistance()))  {
            minA = a;
        }
    }
    return minA;
}


Arete Graph::biggestArete() {
    Arete maxA = *(listAretes.begin());
    for (Arete a: listAretes) {
        if (a.getDistance() > maxA.getDistance())  {
            maxA = a;
        }
    }
    return maxA;
}


Graph Graph::parcoursPrim(Sommet s1) {
    Graph arb(s1);
    while (arb.listSommets != listSommets) {
        //TODO: parcourir tous les aretes marquées et trouver l'arête le + court
        Arete minAr = biggestArete();
        for (Sommet s: arb.listSommets) {
            
        }
    }
    return arb;
}

