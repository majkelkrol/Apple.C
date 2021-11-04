//
//  main.cpp
//  Apple
//
//  Created by Majkel on 04/11/2021.
//

#include <iostream>
using namespace std;


class Apple {
public:
    
    string name;
    string os;
    string cost;
    
    Apple(string name, string os, string cost) {
        name = name;
        os = os;
        cost = cost;
    }
};


int main() {
    
    Apple apple1("iP", "iOS", "450$");
    Apple apple2("iMac", "macOS", "900$");
    
    cout << apple1.name << endl;
    cout << apple2.os << endl;
    
    return 0;
}
