//
//  Sommet.hpp
//  Graph
//
//  Created by Victor Xu on 11/22/17.
//  Copyright © 2017 ds. All rights reserved.
//

#ifndef Sommet_hpp
#define Sommet_hpp

#include <iostream>
#include <string>

using namespace std;

class Sommet {
    // On nomme un sommet par son numéro
    int numero;
public:
    
    // Construire un sommet à l'aide d'un nom en argument
    Sommet(int n);
    Sommet();
    
    //Renvoyer son nom
    int getName();
    
    // Redéfinir des opérations, notamment pour évaluer des conditions
    bool operator==(const Sommet& s) const;
    void operator=(const Sommet& s);
    bool operator<(const Sommet& rhs) const;
};

#endif /* Sommet_hpp */
