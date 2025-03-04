#ifndef REF_H
#define REF_H

using namespace std;

#include <iostream>
#include <string>
#include "Player.h"

class Referee {
    public:
        Referee() {
            
        };

        Player * refGame(Player * player1, Player * player2) {
            char p1move = player1->makeMove();
            char p2move = player2->makeMove();

            if (p1move == 'S' && p2move == 'P') {
                return player1;
            }
            if (p1move == 'P' && p2move == 'S') {
                return player2;
            }
            if (p1move == 'S' && p2move == 'R') {
                return player2;
            }
            if (p1move == 'R' && p2move == 'S') {
                return player1;
            }
            if (p1move == 'P' && p2move == 'R') {
                return player1;
            }
            if (p1move == 'R' && p2move == 'P') {
                return player2;
            }
            return NULL;
        };
};

#endif