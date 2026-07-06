#include "golf_player.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

GolfPlayer::GolfPlayer()
{
    cout << "现在输入球员信息：\n";
    cout << "姓名：";
    cin >> name_;
    cout << "差点：";
    cin >> handicap_;
    cout << "设置成功！\n";
}
GolfPlayer::~GolfPlayer()
{
}

GolfPlayer::GolfPlayer(string name, int handicap)
{
    name_ = name;
    handicap_ = handicap < 0 ? 0 : handicap;
    // 若差点小于0则设为0
}

void GolfPlayer::setGolf(string name, int hc)
{
    name_ = name;
    handicap_ = hc;
}

void GolfPlayer::showGolf()
{
    cout << "球员信息：\n";
    cout << "姓名：" << name_ << endl;
    cout << "差点：" << handicap_ << endl;
}

void GolfPlayer::setHandicap(int hc)
{
    handicap_ = hc < 0 ? 0 : hc;
}
