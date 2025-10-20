#include "dealer.h"
#include <iostream>
Dealer::Dealer(Cards* c){
    auto x = c->getShuffledCards();
    if(x.empty()){
        std::cout << "No shuffled deck exists!\n";
        return;
    }
    for(auto i : x){
        dealerCards.push(i);
    }
}

void Dealer::dealCards(Player* p){
    std::vector<std::string> ret;
    for(int i = 0 ; i < 2 ; i++){
        auto temp = dealerCards.front();
        ret.push_back(temp);
        dealerCards.pop();
    }
    p->cards = ret;
}

void Dealer::resetCards(Cards* c){
    while(!dealerCards.empty()){
        dealerCards.pop();
    }
    c->shuffle();
    auto x = c->getShuffledCards();
    if(x.empty()){
        std::cout << "No shuffled deck exists!\n";
        return;
    }
    for(auto i : x){
        dealerCards.push(i);
    }
}