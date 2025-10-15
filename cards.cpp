#include "cards.h"
#include <iostream>

Cards::Cards(){
    //hearts
    cards.push_back("A♥");
    for(int i = 0 ; i < 9 ; i++){
        std::string suit = "♥";
        cards.push_back(std::to_string(i) + suit);
    }
    //spades
    cards.push_back("A♠");
    for(int i = 0 ; i < 9 ; i++){
        std::string suit = "♠";
        cards.push_back(std::to_string(i) + suit);
    }
    //diamonds
    cards.push_back("A♦");
    for(int i = 0 ; i < 9 ; i++){
        std::string suit = "♦";
        cards.push_back(std::to_string(i) + suit);
    }
    //clubs
    cards.push_back("A♣");
    for(int i = 0 ; i < 9 ; i++){
        std::string suit = "♣";
        cards.push_back(std::to_string(i) + suit);
    }
}

std::vector<std::string> Cards::getCards(){return cards;}