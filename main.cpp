#include <iostream>
#include <string>

#include "Player.h"
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

using namespace std;

int main() {
    Player * jai = new Human;
    Player * bot = new Computer;

    Referee * ref = new Referee;

    Player * winner = ref->refGame(jai, bot);

    if (winner == jai) {
        cout << "human" << endl;
    } else if (winner == bot) {
        cout << "computer" << endl;
    } else {
        cout << "tie" << endl;
    }
}