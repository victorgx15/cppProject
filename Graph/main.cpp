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
    Sommet s1("1"), s2("2"), s3("3"), s4("4");
    Arete a1(s1,s2,3);
    std::cout << "Hello, World!\n";
    return 0;
}


