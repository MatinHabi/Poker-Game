#ifndef PLAYER_H
#define PLAYER_H
#include "chips.h"
#include <string>
#include <vector>
#include <map>

class Player{
protected:
    std::string name;
    std::map <Chips, int> chips;
    std::vector<std::string> cards;
    int balance;
    friend class Dealer;
    friend class Helper;
    friend class Hands;
public:
    Player();
    Player(std::string name);

    std::string getName();
    
    void clearHand(){cards.clear();}
    void recieveCard(std::string);
    void showHand();
    void bet(int amount){
        Helper::updateBalance(this, amount);
    }

    int getBalance(){return balance;}

    std::vector<std::string> getHand(){return cards;}

    std::map<Chips, int> getChips();
};





#endif