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
public:
    string getName();
    bool operator==(const Sommet& s);
};

#endif /* Sommet_hpp */
