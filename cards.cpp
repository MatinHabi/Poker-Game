#include "cards.h"
#include <iostream>

Cards::Cards(){
    //hearts
    cards.push_back("A♥");
    for(int i = 1 ; i <= 10 ; i++){
        std::string suit = "♥";
        cards.push_back(std::to_string(i) + suit);
    }
    cards.push_back("K♥");
    cards.push_back("Q♥");
    cards.push_back("J♥");
    //spades
    cards.push_back("A♠");
    for(int i = 1 ; i <= 10 ; i++){
        std::string suit = "♠";
        cards.push_back(std::to_string(i) + suit);
    }
    cards.push_back("K♠");
    cards.push_back("Q♠");
    cards.push_back("J♠");
    //diamonds
    cards.push_back("A♦");
    for(int i = 1 ; i <= 10 ; i++){
        std::string suit = "♦";
        cards.push_back(std::to_string(i) + suit);
    }
    cards.push_back("K♦");
    cards.push_back("Q♦");
    cards.push_back("J♦");
    //clubs
    cards.push_back("A♣");
    for(int i = 1 ; i <= 10 ; i++){
        std::string suit = "♣";
        cards.push_back(std::to_string(i) + suit);
    }
    cards.push_back("K♣");
    cards.push_back("Q♣");
    cards.push_back("J♣");
}

std::vector<std::string> Cards::getCards(){return cards;}