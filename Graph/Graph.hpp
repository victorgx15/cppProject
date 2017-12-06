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
    // La liste des arêtes dans le graphe
    vector<Arete> listAretes;
    
public:
    
    // Parcours avec l'algorithme de Prim
    Graph parcoursPrim(Sommet);
    
    /* Renvoyer la liste de sommets dans le graphe. Le "set" est un tableau
     dynamique qui n'ajoute pas d'éléments déjà existant */
    set<Sommet> getSommets();
    
    // Renvoyer la plus petite arête passant par le sommet en argument
    Arete arretePlusCourte(Sommet s);
    
    // Renvoyer toutes les arêtes passant pas le sommet en argument
    vector<Arete> listArrPar(Sommet s);
    
    // Renvoyer la plus grande arête du graphe
    Arete biggestArete();
    
    // Renvoyer l'arête reliant 2 sommets en arguments
    Arete getAreteOf(Sommet, Sommet);
    
    // Utile pour renvoyer l'arbre couvrant
    Graph(Arete a);
    
    // Ajouter une arête dans le graphe
    void ajoutArete(Arete a);
    
    // Afficher le graphe
    void afficher();
};

#endif /* Graph_hpp */
