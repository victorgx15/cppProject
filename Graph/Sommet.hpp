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
    string name;
    int numeroSommet;
    static int num;
public:
    Sommet(string n);
    Sommet();
    string getName();
    bool operator==(const Sommet& s) const;
    void operator=(const Sommet& s);
    bool operator<(const Sommet& rhs) const {
        return this->numeroSommet < rhs.numeroSommet; 
    }
};

#endif /* Sommet_hpp */
