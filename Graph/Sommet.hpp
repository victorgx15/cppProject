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
    int numero;
public:
    Sommet(int n);
    Sommet();
    int getName();
    bool operator==(const Sommet& s) const;
    void operator=(const Sommet& s);
    bool operator<(const Sommet& rhs) const {
        return this->numero < rhs.numero; 
    }
};

#endif /* Sommet_hpp */
