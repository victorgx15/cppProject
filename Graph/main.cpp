//
//  main.cpp
//  Graph
//
//  Created by Victor Xu on 11/22/17.
//  Copyright © 2017 ds. All rights reserved.
//

#include <iostream>
#include "Graph.hpp"
#include "Arete.hpp"
#include "Sommet.hpp"

int main(int argc, const char * argv[]) {
    
    // Démonstration du parcours d'arbre couvrant avec 6 sommets
    Sommet s1(1), s2(2), s3(3), s4(4), s5(5), s6(6);
    vector<Arete> aretes = {
        Arete(s1,s2,6),  Arete(s1,s3,1),  Arete(s1,s4,5), Arete(s2,s3,5),
        Arete(s2,s5,3), Arete(s5,s3,6),  Arete(s5,s6,6), Arete(s6,s3,4),
        Arete(s6,s4,2), Arete(s4,s3,5)
    };
    
    Graph cycl(aretes[0]);
    for (int i = 1; i < aretes.size(); i++) {
        cycl.ajoutArete(aretes[i]);
    }
    
    // Afficher sur le parcours de l'arbre couvrant avec l'algorithme de Prim
    cycl.parcoursPrim(s1).afficher();
    
    // Ligne empêchant la fermeture de la console si l'exécution est sur Windows
    int rere; cin>>rere;
    
    return 0;
}
