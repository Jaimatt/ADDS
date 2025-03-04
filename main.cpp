#include <iostream>
#include <string>

#include "Player.h"
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

using namespace std;

int main() {
    Player * jai = new Human("jai");
    Player * bot = new Computer("pc");

    Referee * ref = new Referee;

    Player * winner = ref->refGame(jai, bot);

    cout << winner->getName() << " wins" << endl;
}