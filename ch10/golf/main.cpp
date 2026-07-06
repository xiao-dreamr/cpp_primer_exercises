#include "golf_player.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    GolfPlayer player1;
    GolfPlayer player2("小红", 0);
    player2.setGolf("小红", 0);
    player1.setHandicap(10);
    player1.showGolf();
    player2.showGolf();
    return 0;
}
// SUCCESS
