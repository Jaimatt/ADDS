#ifndef HUMAN_H
#define HUMAN_H

using namespace std;

#include <iostream>
#include <string>

class Human : public Player {
    public:
        Human(string n) {
            name = n;
        };

        char makeMove() {
            char move;
            cout << "Enter move: ";
            cin >> move;
            return move;
        };
};

#endif