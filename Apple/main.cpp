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
};


int main() {
    
    Apple apple1;
    apple1.name = "iPhone";
    apple1.os = "iOS";
    apple1.cost = "450$";
    
    cout << apple1.name << endl;
    cout << apple1.os << endl;
    cout << apple1.cost << endl;
    
    return 0;
}
