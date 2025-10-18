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
    if(shuffledDeck.empty()){
        shuffledDeck = cards;
    }
    //pick 2 random numerbers from 52
    //swap cards
    int card1;
    int card2;
    for(int i = 0 ; i < cards.size() ; i++){
        card1 = rand() % (cards.size());
        card2 = rand() % (cards.size());
        std::string temp;
        if(card1 == card2){
            card1++;
        }
        temp = shuffledDeck[card1];
        shuffledDeck[card1] = shuffledDeck[card2];
        shuffledDeck[card2] = temp;
    }

    //test print
    for(auto i : shuffledDeck){
        std::cout << i << " ";
    }
    std::cout << "\n";

}

std::vector<std::string> Cards::getShuffledCards(){return shuffledDeck;}