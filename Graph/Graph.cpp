//
//  Graph.cpp
//  Graph
//
//  Created by Victor Xu on 11/22/17.
//  Copyright © 2017 ds. All rights reserved.
//

#include "Graph.hpp"
#include <iostream>

Graph::Graph(Arete a) {
    listAretes.push_back(a);
}

void Graph::ajoutArete(Arete a) {
    bool existe = false;
    for (Arete ii: listAretes)
        if (ii.unSommet(a.getY()) && ii.unSommet(a.getX()))
            existe = true;
    if (!existe)
        listAretes.push_back(a);
}

void Graph::afficher() {
    for(auto a: listAretes)
        a.afficher();
}

Arete Graph::arretePlusCourte(Sommet s) {
    Arete minA = *(listAretes.begin());
    vector<Arete> listArr;
    for (Arete a: listAretes)
        if ((a.unSommet(s)) && (a.getDistance() < minA.getDistance()))
            minA = a;
    return minA;
}

std::vector<Arete> Graph::listArrPar(Sommet s) {
    vector<Arete> listArr;
    for (Arete a: listAretes)
        if (a.unSommet(s))
            listArr.push_back(a);
    return listArr;
}


Arete Graph::biggestArete() {
    Arete maxA = *(listAretes.begin());
    for (Arete a: listAretes)
        if (a.getDistance() > maxA.getDistance())
            maxA = a;
    return maxA;
}

Graph Graph::parcoursPrim(Sommet s1) {
    Graph arb(arretePlusCourte(s1));
    while (arb.getSommets() != getSommets()) {
        Arete minAr = biggestArete();
        
        //parcours les sommets du nouvel arbre
        for (Sommet s: arb.getSommets()) {
            //parcours les aretes passant par le sommet s
            for(Arete adp: listArrPar(s)) {
                //si l'autre sommet n'existe pas dans arb.getSommets()
                bool existe = false;
                for(Sommet sss: arb.getSommets())
                    if(sss == adp.getExtremite(s))
                        existe = true;
                if (minAr.getDistance() > getAreteOf(adp.getExtremite(s), s).getDistance() && existe == false)
                    minAr = getAreteOf(adp.getExtremite(s), s);
            }
        }
        arb.ajoutArete(minAr);
    }
    return arb;
}

Arete Graph::getAreteOf(Sommet s1, Sommet s2) {
    for(Arete arr: listAretes)
        if (arr.unSommet(s1) && arr.unSommet(s2))
            return arr;
    throw exception();
}

set<Sommet> Graph::getSommets() {
    set<Sommet> soms;
    for(Arete ar: listAretes) {
        soms.insert(ar.getX());
        soms.insert(ar.getY());
    }
    return soms;
}
