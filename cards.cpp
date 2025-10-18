#include "cards.h"
#include <iostream>
#include <ctime>
#include <random>
#include <map>

Cards::Cards(){
    std::srand(time(NULL));
    //hearts
    cards.push_back("A♥");
    for(int i = 2 ; i <= 10 ; i++){
        std::string suit = "♥";
        cards.push_back(std::to_string(i) + suit);
    }
    cards.push_back("K♥");
    cards.push_back("Q♥");
    cards.push_back("J♥");
    //spades
    cards.push_back("A♠");
    for(int i = 2 ; i <= 10 ; i++){
        std::string suit = "♠";
        cards.push_back(std::to_string(i) + suit);
    }
    cards.push_back("K♠");
    cards.push_back("Q♠");
    cards.push_back("J♠");
    //diamonds
    cards.push_back("A♦");
    for(int i = 2 ; i <= 10 ; i++){
        std::string suit = "♦";
        cards.push_back(std::to_string(i) + suit);
    }
    cards.push_back("K♦");
    cards.push_back("Q♦");
    cards.push_back("J♦");
    //clubs
    cards.push_back("A♣");
    for(int i = 2 ; i <= 10 ; i++){
        std::string suit = "♣";
        cards.push_back(std::to_string(i) + suit);
    }
    cards.push_back("K♣");
    cards.push_back("Q♣");
    cards.push_back("J♣");
}

std::vector<std::string> Cards::getCards(){return cards;}

void Cards::shuffle(){
    if(cards.empty()){
        std::cout << "Deck is empty!\n";
        return;
    }

    int randomNum;
    for(int i = 0 ; i < cards.size() -1 ; i++){
        randomNum = rand() % (cards.size()-1);
        cards[i] = cards[randomNum];
    }
    //test print
    for(auto i : cards){
        std::cout << i << " ";
    }
    std::cout << "\n";

}