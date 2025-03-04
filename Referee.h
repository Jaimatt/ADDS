#ifndef REF_H
#define REF_H

using namespace std;

#include <iostream>
#include <string>

class Referee {
    private:
        Referee();

        Player * refGame(Player * player1, Player * player2) {
            if (player1->makeMove() == 'S' && player2->makeMove() == 'P') {
                return player1;
            }
            if (player1->makeMove() == 'P' && player2->makeMove() == 'S') {
                return player2;
            }
            if (player1->makeMove() == 'S' && player2->makeMove() == 'R') {
                return player2;
            }
            if (player1->makeMove() == 'R' && player2->makeMove() == 'S') {
                return player1;
            }
            if (player1->makeMove() == 'P' && player2->makeMove() == 'R') {
                return player1;
            }
            if (player1->makeMove() == 'R' && player2->makeMove() == 'P') {
                return player2;
            }
            return NULL;
        };
};

#endif