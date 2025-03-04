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

    ref->refGame(jai, bot);
}