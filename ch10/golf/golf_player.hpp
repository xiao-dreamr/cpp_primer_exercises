#if !defined(GLOF_PLAYER_)
#define GLOF_PLAYER_

#include <string>

using std::string;

class GolfPlayer
{
private:
    string name_;
    int handicap_;

public:
    GolfPlayer(string name, int handicap);
    GolfPlayer();
    ~GolfPlayer();
    void setGolf(string name, int hc);
    void showGolf();
    void setHandicap(int hc);
};


#endif // GLOF_PLAYER_
